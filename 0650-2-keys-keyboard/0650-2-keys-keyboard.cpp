class Solution {
public:
    int t[1001][1001];
    int solve(int currA,int clipboardA, int n){
        
        if (currA==n)
            return 0;
        if (currA>n)
            return 100000;
        if (t[currA][clipboardA]!=-1)
            return t[currA][clipboardA];
        
        int copyAllPaste = 1+1+solve(currA+currA,currA,n);
        
        int paste = 1+ solve(currA+clipboardA,clipboardA,n);
    
        return t[currA][clipboardA]=min(copyAllPaste,paste);
    }
    
    int minSteps(int n) {
        memset(t,-1,sizeof(t));
        if (n==1 )
            return 0;
        
        return 1+solve(1,1,n);
    }
    
};