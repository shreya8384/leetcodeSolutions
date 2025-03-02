class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

}
};
/*class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_map<int,int>hashset;
        for(int num:nums){
            hashset[num]++;
        }
        int longestStreak = 0;
        for(int num:nums){
            if(hashset.find(num-1)!=hashset.end()) continue;
            else{
                int currentNum = num;
                int currentStreak = 1;
                while(hashset.find(currentNum+1)!=hashset.end()){
                    currentNum +=1;
                    currentStreak +=1;
                }
                longestStreak = max(longestStreak, currentStreak);
            }
        }
        return longestStreak;
    }
};
*/
/* this prgram is exceeding the time limit because of use of set
    class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    set<int>hashset;
        for(int num:nums)
        {
            hashset.insert(num);
        }
        int  longeststreak = 0;
        for(int num:nums){
             if(hashset.find(num-1) != hashset.end())
                continue;
            else{
                int currentNum=num;
                int currentStreak = 1;
           
            while(hashset.find(currentNum+1) != hashset.end()){
                currentNum +=1;
                currentStreak +=1;
            }
            longeststreak = max(longeststreak,currentStreak);
            }
        }    
        return longeststreak;
    }
};
*/