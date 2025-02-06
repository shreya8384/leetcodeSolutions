class Solution {
public:
    int myAtoi(string s) {
        int i=0 , n = s.size();
        while(s[i] == ' '){//skipping space characters at the beginning
            i++;
        }
        int positive = 0, negative = 0;
        if(s[i] == '+'){
            positive++; //number of positive signs at the start in string
            i++;
        }
        if(s[i] == '-'){
            negative++; //number of negative signs at the start in string
            i++;
        }
        double ans = 0;
        while(i<n && s[i] >= '0' and s[i] <= '9'){
            ans = ans*10 + (s[i] - '0');//(s[i]-'0') is conversting characters to integer
            i++;
        }
        if(negative>0)//if negative sign exists
        ans  = -ans;
        if(positive>0 && negative>0) // if both the +ve and -ve sign exist
        return 0;
        
        if(ans>INT_MAX) // if ans > 2^31 - 1
        ans = INT_MAX;

        if(ans<INT_MIN) // if ans 2^31
        ans = INT_MIN;

        return ans;
        /*
        int i = 0, n = s.size();
        
        while(s[i] == ' '){ //skipping space characters at the biginning
            i++;
        }
        int positive = 0, negative = 0;
        if(s[i] == '+'){
            positive++; //number of positive signs at the start in string
            i++;
        }
        if(s[i] == '-'){
            negative++; //number of negative signs at the start in string
            i++;
        }
        double ans = 0;
        while(i<n && s[i] >= '0' and s[i] <= '9'){
            ans = ans*10 + (s[i] - '0'); // (s[i] - '0') is converting character to integer
            i++;
        }

        if(negative >0) //if negative sign exist
        ans = -ans;
        if(positive>0 && negative>0) // if both the +ve and -ve sign exist
        return 0;

        if(ans>INT_MAX) // if ans > 2^31 - 1
        ans = INT_MAX;

        if(ans<INT_MIN) // if ans 2^31
        ans = INT_MIN;

        return (ans);
      */


    }
};