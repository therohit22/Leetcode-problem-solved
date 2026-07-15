class Solution {
public:
    double myPow(double x, int nn) {
        double ans = 1.0;
        long long n = nn;

        if (n < 0) {
            n = -n;
        }

        while (n) {
            if (n % 2 == 0) {
                x = x * x;
                n = n / 2;
            } else {
                ans = ans * x;
                n = n - 1;
            }
        }

        if (nn < 0) {
            ans = 1.0 / ans;
        }

        return ans;
    }
};