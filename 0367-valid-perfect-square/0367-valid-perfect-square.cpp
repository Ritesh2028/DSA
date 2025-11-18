class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1) return true;
        for(long  i =1;i<num;i++){
            long x=i*i;
            if(x==num){
                return true;
            }
        }
        return false;
    }
};