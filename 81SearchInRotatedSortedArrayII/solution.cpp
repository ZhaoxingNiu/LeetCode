class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.empty()) return false;
        int li =0;
        int hi = nums.size()-1;
        while(li<hi){
            int mid = (li+hi)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]>nums[li]){
                if(target>=nums[li]&&target<nums[mid]) hi = mid;
                else li = mid+1;
            }else if(nums[mid]<nums[li]){
                if(target>nums[mid] && target <nums[li]) li = mid+1;
                else hi = mid;
            }else{
                li++;
            }
        }
        return nums[hi] ==target;
    }
};