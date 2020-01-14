class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long p=n;
        
        if(n==0)
            return 1;
        
        if(n<0){
            x = 1/x;
            p = n;
            p = -p;
        }
        
        while(p){
            if(p&1){
                ans *= x;
            }
            x *= x;
            p >>=1;
        }
        return ans;
    }
};
