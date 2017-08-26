#include<iostream>
using namespace std;

int num[1000];
void quick_sort(int num[],int begin,int end)
{
   if(begin<end){
     int left=begin,right=end;
     int temp=num[left];
     while(left<right)
     {
         while(left<right&&num[right]>=temp) right--;
         if(left<right) num[left++]=num[right];
         while(left<right&&num[left<temp]) left++;
        if(left<right) num[right--]=num[left];
     }
     num[left]=temp;
     quick_sort(num,begin,left-1);
     quick_sort(num,left+1,end);
   }
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>num[i];
        quick_sort(num,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
