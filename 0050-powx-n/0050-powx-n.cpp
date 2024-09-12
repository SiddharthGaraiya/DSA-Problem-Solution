class Solution {
public:
    double solve(double x, int n) {
        if (n == 0)
            return 1;
        double nb = solve(x, n / 2);
        nb *= nb;
        if (n % 2 )
            nb *= x;
        return nb;
    }

    double myPow(double x, int n) {
        if (n < 0) {
            x = 1 / x;
        }
        long a = labs(n);
        return solve(x, n);
    }
};
