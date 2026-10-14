class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long long negNum = n;
        if(negNum < 0){
            negNum = -1 * negNum;
        }
        while(negNum > 0){
            if(negNum % 2 == 1){
                res = res * x;
                negNum = negNum - 1;
            }
            else{
                x = x*x;
                negNum = negNum / 2;
            }
        }
        if(n<0){
            res = double(1)/res;
        }
        return res;
    }
};