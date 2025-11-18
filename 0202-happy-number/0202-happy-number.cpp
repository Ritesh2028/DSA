class Solution {
public:
    int getno(int a) {
    int ans = 0;
    while (a > 0) {
        int rem = a % 10;
        ans += rem * rem;  
        a /= 10;
    }
    return ans;
}
    bool isHappy(int n) {
        
    int x=n,y = getno(n);
    while(y!=1 && x!=y){
        x=getno(x);
        y=getno(getno(y));
    }
    if(y==1){
      return true;  
    }
    else{
return false;
    }

    
        
    }
};