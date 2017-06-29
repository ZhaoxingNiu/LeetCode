class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        vector<int> newnums;
        int num = nums[0];
        newnums.push_back(num);
        for(int i=1;i<nums.size();i++){
            if(num==nums[i]){
                continue;
            }
            num = nums[i];
            newnums.push_back(num);
        }
        nums = newnums;
        return nums.size();
    }
};