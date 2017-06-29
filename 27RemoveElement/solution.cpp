class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        vector<int>::iterator it_tmp;
        for(vector<int>::iterator it = nums.begin();it!=nums.end();){
            if(*it==val){
                it_tmp = it;
                it = nums.erase(it_tmp);
            }else{
                it++;
            }
        }
        return nums.size();
    }
};