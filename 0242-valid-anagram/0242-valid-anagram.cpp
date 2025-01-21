class Solution {
public:
    bool isAnagram(string s, string t) {
       /* if(s.length() != t.length()) return false;
        int n = s.length();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto x:mpp){
            if(x.second) return false;
        }
        return true;*/
        /*
        if(s.length() != t.length())return false;
        int n = s.length();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
            
        }
        for(auto x:mpp){
            if(x.second)return false;
        }
        return true;
        */
        if(s.length() != t.length())return false;
        int n = s.length();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto x:mpp){
            if(x.second)return false;
        }
        return true;
    }
};

/*
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