// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()) return false;
//         int n = s.length();
//         unordered_map<char,int>mpp;
//         for(int i=0;i<n;i++){
//             mpp[s[i]]++;
//             mpp[t[i]]--;
            
//         }
//         for(auto x:mpp){
//             if(x.second) return false;
      
//         }
//           return true;
//     }
        
// };


/* //Approach 1: Sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
*/
/*//Approach 2: Hash Table
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int n = s.length();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
            
        }
        for(auto x:mpp){
            if(x.second) return false;
      
        }
          return true;
    } 
};
*/

//Approach 3: Hash Table (Using Array)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        
        // Count the frequency of characters in string s
        for (char x : s) {
            count[x - 'a']++;
        }
        
        // Decrement the frequency of characters in string t
        for (char x : t) {
            count[x - 'a']--;
        }
        
        // Check if any character has non-zero frequency
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        
        return true;
    }
};
