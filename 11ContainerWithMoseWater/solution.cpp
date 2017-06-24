class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        if(len<2) return 0;
        int a_ol  = 0,a_or = len-1;
        long area = 0;
        while(a_ol < a_or){
            area = max(area,(long)(min(height[a_ol],height[a_or])*(a_or-a_ol)));
            if(height[a_ol]>height[a_or]){
                a_or--;
            }else{
                a_ol++;
            }
        }
        if(area>INT_MAX) return INT_MAX;
        return area;
    }
};