class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0 ;
        while(n != 0){
            //checking the last bit
            if(n&1){
                count++;
            }
            //right shift
            n = n>>1;
        }
        return count;
    }
};























/* 
class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
        while(n!=0){
            //checking for the last bit
           if(n&1){
               count++;
           }
            //right shift n
            n = n>>1;
        }
        return count;
    }
};
*/