class Solution {
public:
    string intToRoman(int num) {
        if(num <1 || num >3999) return "";
        const int numV[] = {1000,500,100,50,10,5,1};
        const char charV[] = {'M','D','C','L','X','V','I'};
        string s;
        int numCount[] = {0,0,0,0,0,0,0};
        for(int i=0;i<7;i++){
            numCount[i] = num/numV[i];
            num = num%numV[i];
            if(i==1||i==3||i==5){
                if(num/numV[i+1]==4){
                    s.append(1,charV[i+1]);
                    numCount[i]++;  //  add 1
                    num = num%numV[i+1];
                }
            }
            if(i==1 || i ==3|| i ==5){
                if(numCount[i]==2){
                    s.append(1,charV[i-1]);
                    numCount[i] -=2;
                }
            }
            while(numCount[i]--){
                s.append(1,charV[i]);
            }
        }
        return s;
        
    }
};