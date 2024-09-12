class Solution {
public:
    double solve(double x, int n) {
        if (!n) return 1;
        double nb = solve(x, n / 2);
        nb *= nb;
        if (n % 2 )nb *= x;
        return nb;
    }

    double myPow(double x, int n) {
        if (n < 0) {
            x = 1 / x;
        }
        return solve(x, n);
    }
};
