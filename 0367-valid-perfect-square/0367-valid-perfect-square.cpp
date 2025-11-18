class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1) return true;
        for(int i =1;i<num;i++){
            long x=(long)i*i;
            if(x==num){
                return true;
            }
        }
        return false;
    }
};