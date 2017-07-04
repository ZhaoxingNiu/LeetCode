class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int li =0,hi = n-1;
        while(li<hi){
            int middle = (li+hi)/2;
            if(target>nums[middle]){
                li = middle+1;
            }else{
                hi = middle;
            }
        }
        return nums[li]>=target?li:li+1;
        
    }
};