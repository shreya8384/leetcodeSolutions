class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     /*   int i = m-1;
        int j = n-1;
        int k = m+n-1;
         while(i>=0 && j>=0)
        {
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        } */
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                i--,k--;
            }
            else{
                nums1[k] = nums2[j];
                j--,k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--,k--;
        }
        // int i=m-1;
        // int j=n-1;
        // int k = m+n-1;
        // while(i>=0 && j>=0){
        //     if(nums1[i]>nums2[j]){
        //         nums1[k] = nums1[i];
        //         i--;k--;
        //     }
        //     else{
        //         nums1[k] = nums2[j];
        //         j--;k--;
        //     }
        // }
        // while(j>=0){
        //     nums1[k] = nums2[j];
        //     j--;k--;
        // }
    }
};

/*class Solution {
private:
void swapifgreater(vector<int>& arr1,int ind1, vector<int>& arr2, int ind2 ){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        int len = n+m;
        int gap = (len/2)+(len%2);
        while(gap>0){
            int left =0;
            int right = left+gap;
            while(right<len){
                //arr1 and arr2
                if(left<n && right>=n){
                    swapifgreater(arr1,left,arr2,right-n);
                }
                //arr2 and arr2
                else if(left>=n){
                    swapifgreater(arr2,left-n,arr2,right-n);
                }
                //arr1 and arr1
                else{
                    swapifgreater(arr1,left,arr1,right);
                }
                left++;
                right++;
            }
            if(gap == 1) break;
            gap = (gap/2)+(gap%2);
        }
    }
};
*/