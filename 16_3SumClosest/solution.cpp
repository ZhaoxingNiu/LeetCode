class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest_dis =INT_MAX;
        int closest_num =0;
        if(nums.size()<3)  return closest_num;
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();){
            int num1 = nums[i];
            int front = i+1;
            int end = nums.size()-1;
            while(front < end){
                int num2 = nums[front];
                int num3 = nums[end];
                int sum = num1+num2 +num3;
                int dis = sum>target?sum-target:target-sum;
                if(dis==0) return sum;
                if(dis < closest_dis){
                    closest_dis = dis;
                    closest_num = sum;
                }
                if(sum<target){
                    front++;
                }
                else if(sum>target){
                    end--;
                }
            }
            while(nums[i] == num1) i++;
        }
        return closest_num;
        
    }
};