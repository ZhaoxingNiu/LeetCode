//���ܴ������ֵΪ���������  Ӧ���ȸ�ֵ  �ٱ��0
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int res = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum >res) res = sum;
            if(sum<0){
                sum = 0;
            }
        }
        return res;
    }
};