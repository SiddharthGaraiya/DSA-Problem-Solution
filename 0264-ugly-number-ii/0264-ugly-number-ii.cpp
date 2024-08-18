class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> t(n+1);
        
        int i2;
        int i3;
        int i5;
        
        i2=i3=i5=1;
        
        t[1]=1;
        
        for (int i=2;i<=n;i++){
            int i2UglyNum = t[i2]*2;
            int i3UglyNum = t[i3]*3;
            int i5UglyNum = t[i5]*5;
            
            int minUglyNum = min({i2UglyNum,i3UglyNum,i5UglyNum});
            t[i]=minUglyNum;
            
            if (minUglyNum == i2UglyNum)
                i2++;
            if (minUglyNum == i3UglyNum)
                i3++;
            if (minUglyNum == i5UglyNum)
                i5++;
            
        }
        
        return t[n];
        
    }
};