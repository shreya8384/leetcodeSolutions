class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n] = nums[i];
        }
         nums = temp;
    }
};

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k = k % n;  // handling overflow range
        // negative case
        if(k<0){
            k= n+k;
        }
        //reverse the first part of the array
        reverse(nums.begin(), nums.begin()+n-k);
        
        //reverse the second part of array
        reverse(nums.begin()+n-k,nums.begin()+n);
        
        //reverse whole array
        reverse(nums.begin(),nums.end());
    }
};
*/