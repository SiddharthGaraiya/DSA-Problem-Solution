class Solution {
public:
    int arr[1001][1001];
    bool check(string&s ,int i,int j){
        if (i>j){
            return true;
        }
        if (arr[i][j]!=-1)
            return arr[i][j];
        if (s[i]==s[j]){
            return arr[i][j]=check(s,i+1,j-1);
        }
        return arr[i][j]=false; 
    }
    
    
    int countSubstrings(string s) {
        int n =s.size();
        int count=0;
        memset(arr,-1,sizeof(arr));
        for (int i =0;i<n;i++){
            for (int j =i;j<n;j++){
                bool b=check(s,i,j);
                if (b) count++;
            }
        }
        
        return count;
    }
};