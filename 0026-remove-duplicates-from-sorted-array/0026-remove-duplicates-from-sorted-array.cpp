class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0;
       for(int j=1;j<nums.size();j++){
           if(nums[i]!=nums[j]){
               i++;
               nums[i] = nums[j];
           }
       }
        return i+1;
    }
};


/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
         // return length of j and index+1 is equals to length n we have to return the count of total number of unique elements
        return i+1;
        
    }};
*/