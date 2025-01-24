class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    int count = 0;
    //     int element = 0;
    //     for(int num:nums){
    //         if(count == 0){
    //             element = num;
    //         }
    //         if(num == element)count +=1;
    //         else count -=1;
    //     }
    //     return element;

    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    for(auto x:mpp){
        if(x.second > nums.size()/2){
            return x.first;
        }
    }
    return -1;
   /* int count = 0;
    int element = 0;
    for(int num:nums){
        if(count == 0){
            element = num;
        }
        if(num == element) count +=1;
        else count -=1;
    }
    return element;
    */
   
    /*  unordered_map<int,int>m;
      for(int i =0 ;i<nums.size();i++){
          m[nums[i]]++;
      }  
      for(auto x:m){
          if(x.second > nums.size()/2){
              return x.first;
          }
      }
      return -1;
      */
    }
};