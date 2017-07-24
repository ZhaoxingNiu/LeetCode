class Solution {
public:
    vector<int> grayCode(int n) {
        //����������ɹ���   ǰ���1  �������
        // ע����������ȼ� ������ ����  Ȼ���� ++ -- �Ȳ���  ֮�� �˳�   ֮��Ӽ�   ֮�� λ����  
        //  ���������㣬����λ���㣬���λ����    *  �� ->  ��Ҫ������
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