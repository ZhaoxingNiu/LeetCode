class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // map version   13%
        // map<char,int> map;
        // int maxlen = 0,start =-1;
        // for(int i= 0;i<s.size();i++){
        //     if(map.find(s[i])!=map.end()){
        //         if(start < map[s[i]]) start  = map[s[i]]; 
        //     }
        //     map[s[i]] = i;
        //     maxlen = max(maxlen,i-start);
        // }
        // return maxlen;
        
        //vector version  98.44%  good
        vector<int> dict(256,-1);
        int maxlen = 0,start= -1;
        int slen = s.length();
        for(int i=0;i!=slen;i++){
            if(dict[s[i]]>start){
                start = dict[s[i]];
            }
            dict[s[i]] = i;
            maxlen = max(maxlen,i-start);
        }
        return maxlen;
    }
};