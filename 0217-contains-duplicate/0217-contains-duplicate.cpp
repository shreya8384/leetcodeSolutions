class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>=2)
                return true;
        }
        return false;
    }
};
/*
//first solution Time complexity: O(nlogn) Space complexity: O(n) by sorting
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        
        return false;        
    }
};
*/
/*
// second solution- set Time complexity: O(n) Space complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>numSet;
        for(int n:nums){
            if(numSet.find(n)!= numSet.end()){
                return true;
            }
            numSet.insert(n);
        }     
        return false;
    }
};
*/
/*
//Solution 3 - Check length Time complexity: O(n) Space complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int>numSet(nums.begin(),nums.end());
       return numSet.size()<nums.size();       
    }
};
*/
/*
//solution using map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>=2)
                return true;
        }
        return false;
    }
};
*/