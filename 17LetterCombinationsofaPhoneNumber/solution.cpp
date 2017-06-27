class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.length()<0||digits =="") return res;
        res.push_back("");
        string charmap[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(int i=0;i<digits.length();i++){
            int index = digits[i]-'0';
            if(i<0||i>9) break;
            vector<string> tmp;
            for(int j=0;j<charmap[index].length();j++){
                for(int k=0;k<res.size();k++){
                    tmp.push_back(res[k]+charmap[index][j]);
                }
            }
            res = tmp;
        }
        return res;
    }
};