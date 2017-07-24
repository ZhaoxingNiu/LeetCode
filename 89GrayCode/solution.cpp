class Solution {
public:
    vector<int> grayCode(int n) {
        //格雷码的生成规则   前面加1  逆序输出
        // 注意运算符优先级 首先是 括号  然后是 ++ -- 等操作  之后 乘除   之后加减   之后 位运算  
        //  先算术运算，后移位运算，最后位运算    *  和 ->  需要加括号
        vector<int> res(1,0);
        for(int i=0;i<n;i++){
            int count = res.size();
            while(count){
                int sum = res[--count]+(1<<i);
                res.push_back(sum);
            }
        }
        return res;
    }
};