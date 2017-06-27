class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.size()<4) return res;
        std::sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();){
            int num1 = nums[i];
            for(int j=i+1;j<nums.size()-2;){
                int num2 = nums[j];
                int sum = target-num1-num2;
                int front = j+1;
                int end = nums.size()-1;
                while(front<end){
                    int num3 = nums[front];
                    int num4 = nums[end];
                    int sum2 = num3+num4;
                    if(sum2 ==sum){
                        vector<int > quad;
                        quad.push_back(num1);
                        quad.push_back(num2);
                        quad.push_back(num3);
                        quad.push_back(num4);
                        res.push_back(quad);
                        while(nums[front] ==num3) front++;
                        while(nums[end]==num4) end--;
                    }else if(sum2<sum){
                        while(nums[front] ==num3) front++;
                    }else {
                        while(nums[end]==num4) end--;
                    }
                }
                while(nums[j]==num2) j++;
            }
            while(nums[i]==num1) i++;
        }
        return res;
    }
};