//unorder hash map  find function takes a constant time 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> hash;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int numFind = target - nums[i];
            if(hash.find(numFind)!=hash.end()){
                result.push_back(hash[numFind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
        return result;
    }
};