class Solution {
public:
    /*
    i&(i-1) drops the lowest set bit. For example: i = 14, its binary representation is 1110, so i-1 is 1101, i&(i-1) = 1100, the number of       "1" in its binary representation decrease one, so ret[i] = ret[i&(i-1)] + 1. (Sorry, my English is so poor and I have tried my best to        make it clearly, I hope you can understand my explanation
    */
    vector<int> countBits(int num) {
        /*
        vector<int> nums;
        nums.push_back(0);
        int index = 1;
        int pown = 0;
        while(index<=num){
            if(index == (1<<pown)){
                pown +=1;
                nums.push_back(1);
            }
            else{
                nums.push_back(nums[index - (1<<(pown-1))]+1);
            }
            index++;
        }
        */
        vector<int> nums(num+1,0);
        for(int i=1;i<=num;i++){
            nums[i] = nums[i&i-1]+1;
        }
        return nums;
    }
};