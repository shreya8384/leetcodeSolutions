class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    /*   int sz = nums.size();
       int num1 =-1 , num2 = -1, count1=0,count2 =0,i;
       for(i=0;i<sz;i++){
           if(nums[i] == num1)
           count1++;
           else if(nums[i] == num2)
           count2++;
           else if(count1 == 0){
               num1 = nums[i];
               count1 = 1;
           }
           else if(count2 == 0){
               num2 = nums[i];
               count2 = 1;
           }
           else {
               count1--;
               count2--;
           }
       }
       vector<int>ans;
       count1 = count2 = 0;
       //one more iteration in array to count how mny times num1 and num2 occurs
       for(i=0;i<sz;i++){
           if(nums[i] == num1)
            count1++;
           else if(nums[i] == num2)
           count2++;
       }
       if(count1>sz/3)
       ans.push_back(num1);
       if(count2>sz/3)
       ans.push_back(num2);
       return ans;
       */
       /* unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second > nums.size()/3){
                v.push_back(x.first);
                
            }
        }
        return v;
        */
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>nums.size()/3){
                v.push_back(x.first);
            }
        }
        return v;
    }
};