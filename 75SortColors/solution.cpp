class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0,second = nums.size()-1;
        for(int i = 0;i<nums.size();i++){
            while(nums[i]==2 && i<second) swap(nums[i],nums[second--]);
            while(nums[i]==0 && i>zero) swap(nums[i],nums[zero++]);
        }
    }
};