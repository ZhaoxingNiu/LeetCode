class Solution {
public:
    int myAtoi(string str) {
        long result = 0;
        int positive = 1;
        int i = str.find_first_not_of(' ');
        if(str[i] =='-' || str[i]=='+'){
            positive = (str[i++]=='-')?-1:1;
        }
        while(str[i]>='0' && str[i]<='9'){
            result = result*10 + (str[i++]-'0');
            if(result*positive>INT_MAX) return INT_MAX;
            else if(result*positive<INT_MIN) return INT_MIN;
        }
        return result*positive;
    }
};