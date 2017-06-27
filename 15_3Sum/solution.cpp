class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()<3)  return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();){
            int sum = -nums[i];
            int front = i+1;
            int end = nums.size()-1;
            while(front < end){
                int sum2 = nums[front]+nums[end];
                if(sum == sum2){
                    vector<int> tris;
                    tris.push_back(nums[i]);
                    tris.push_back(nums[front]);
                    tris.push_back(nums[end]);
                    res.push_back(tris);
                    while(nums[front]==tris[1]) front++;
                    while(nums[end]==tris[2]) end--;
                }
                else if(sum2<sum){
                    front++;
                }
                else if(sum2>sum){
                    end--;
                }
            }
            while(nums[i] +sum ==0) i++;
        }
        return res;
    }
};