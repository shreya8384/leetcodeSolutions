class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        //edge case
        if(n==0)
            return 1;
        while(m!=0){
            //left shift and or for making mask
            mask = (mask<<1)|1;
            //right shift
            m=m>>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};








/*
class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        //edge case
        if (n == 0)
            return 1;
        while(m!=0){
            //left shift and or for making mask
            mask = (mask << 1) | 1;
            //right shift
            m = m>>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};

*/