class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return true;
        int step = 0;
        for(int i=0;i<n-1;i++){
            step = nums[i]>step-1?nums[i]:step-1;
            if(step<=0) return false;
        }
        return true;
    }
};