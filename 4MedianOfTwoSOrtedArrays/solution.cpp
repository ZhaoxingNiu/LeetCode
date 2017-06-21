class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        //make sure that nums1 is larger than the nums2
        if(m<n) return findMedianSortedArrays(nums2,nums1);
        if(n==0) return (nums1[(m-1)/2]+nums1[m/2])/(double)2.0; //if nums is empty
        
        int l1Index = 0,r2Index = n*2;
        while(l1Index <=r2Index){
            // mid1 mid2 is the double length
            int mid2 = (l1Index+r2Index)/2;
            int mid1 = m+n-mid2;
            
            double L1 = (mid1==0)? INT_MIN:nums1[(mid1-1)/2];
            double R1 = (mid1==m*2)? INT_MAX:nums1[mid1/2];
            double L2 = (mid2==0)? INT_MIN:nums2[(mid2-1)/2];
            double R2 = (mid2==n*2)? INT_MAX:nums2[mid2/2];
            
            if(L1>R2) l1Index = mid2+1;
            else if(L2>R1) r2Index = mid2-1;
            else return ((max(L1,L2))+min(R1,R2))/2.0;
        }
        return -1;
    }
};