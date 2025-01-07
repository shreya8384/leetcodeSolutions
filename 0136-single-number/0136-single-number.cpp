class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // int ans;
        // for(auto x:mp){
        //     if(x.second == 1) ans = x.first;
        // }
        // return ans;

    int ans = 0;
    for(int i=0 ; i<nums.size();i++){
    ans = ans^nums[i];
     }
   return ans;

    }
};

// using xor also we can slove this in strivers A2Z sheet
/*
int findUnique(int *arr, int size)
{
   int ans = 0;
   for(int i=0 ; i<size;i++){
       ans = ans^arr[i];
   }
   return ans;
}
*/
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto x:mp){
            if(x.second == 1) ans= x.first;
        }      
        return ans;
    }
};
*/