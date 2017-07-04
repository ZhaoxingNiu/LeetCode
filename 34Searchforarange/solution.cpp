class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> index(2,-1);
        int n = nums.size();
        if(n==0 || target<nums[0] ||  target>nums[n-1] )  return index;
        //find left border
        int li = 0,ri = n-1;
        while(li<ri){
            int middle = (li+ri)/2;
            if(target<=nums[middle])  ri = middle;
            else li= middle+1;
        }
        if(nums[li]!=target) return index;
        else index[0] = li;
        
        //find left border
        li = index[0],ri = n-1;
        while(li<ri){
            int middle = (li+ri+1)/2;
            if(target<nums[middle])  ri = middle-1;
            else li = middle;
        }
        index[1] = li;
        return index;
    }
};