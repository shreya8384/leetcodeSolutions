/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
         if(j == -1){
            return;
        }
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
               swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        // int i = 0;
        
        // for (int j = 0; j < n; j++) {
        //     if (nums[j] != 0) {
        //         swap(nums[i], nums[j]);
        //         i++;
        //     }
        // }
        
        // for (int k = i; k < n; k++) {
        //     nums[k] = 0;
        // }
        int n = nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        for(int k=i;k<n;k++){
            nums[k]=0;
        }
    }
};
/*
class Solution {
    public:
     void moveZeroes(std::vector<int>& nums) {
        int n = nums.size();
        int i =0;
        for (int j =0;j<n;j++)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        for(int k = i ; k<n ;k++)
        {
            nums[k] = 0;
        }
    }
};
*/