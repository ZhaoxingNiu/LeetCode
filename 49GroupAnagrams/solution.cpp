class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>  res;
        if(n==0) return res;
        map<int,int> figureSet;
        map<int,int>::iterator it;
        for(int i=0;i<n;i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            long long tmp = 1;
            for(auto &c:s){
                tmp =tmp*26+ (c-'a'+1);
            }
            it = figureSet.find(tmp);
            if(it == figureSet.end()){
                int size = res.size();
                figureSet[tmp]=size;
                res.push_back(vector<string>());
                res[size].push_back(strs[i]);
            }else{
                res[it->second].push_back(strs[i]);
            }
        }        
        return res;   
    }
};