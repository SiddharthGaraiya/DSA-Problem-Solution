class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx=m-1+n;        //ans
        int p1=m-1;           //for num1
        int p2=n-1;           //for num2
        
        while (idx>=0){
            if (p1>=0 && p2>=0&&nums1[p1]>=nums2[p2]){
                nums1[idx]=nums1[p1];
                p1--;
                idx--;
            }else if (p1>=0 && p2>=0&&nums2[p2]>nums1[p1]){
                nums1[idx]=nums2[p2];
                p2--;
                idx--;
            }else if (p1<0){
                nums1[idx]=nums2[p2];
                p2--;
                idx--;
            }else {
                nums1[idx]=nums1[p1];
                p1--;
                idx--;
            }
        }
    }
};
