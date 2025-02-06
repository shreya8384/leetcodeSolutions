class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int posIndex = 0, negIndex = 1; 
        
        for (int num : nums) {
            if (num > 0) {
                ans[posIndex] = num;
                posIndex += 2;
            } else {
                ans[negIndex] = num;
                negIndex += 2;
            }
        }
        return ans;
    }
};

/*
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       /*
       vector<int>ans(nums.size(),0);
        int indexpos= 0, indexneg = 1;
        for(auto num:nums){
            if(num>0){
                ans[indexpos] = num;
                indexpos +=2;
            }
            if(num<0){
                ans[indexneg] = num;
                indexneg +=2;
            }
        }
        return ans;
        
        vector<int>ans(nums.size(),0);
        int indexpos = 0, indexneg = 1;
        for(auto num : nums){
            if(num>0){
                ans[indexpos] = num;
                indexpos +=2;
            }
            if(num<0){
                ans[indexneg] = num;
                indexneg += 2;
            }
        }
        return ans;
    }
};
*/