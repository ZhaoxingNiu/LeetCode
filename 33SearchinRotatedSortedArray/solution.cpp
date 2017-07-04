class Solution {
public:
    int search(vector<int>& nums, int target) {
        int li = 0,hi = nums.size()-1;
        while(li<hi){
            int mid = (li+hi)/2;
            if(target<nums[0] ^ nums[0]>nums[mid] ^ target>nums[mid]){ 
                li = mid+1;
            }else{ 
                hi = mid;
            }
        }
        return li==hi&&nums[li]==target?li:-1;
    }
    
};