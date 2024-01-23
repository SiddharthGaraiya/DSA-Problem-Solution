class Solution {
public:
    bool isDuplicate(string &s1,string &s2){
        int arr[26]={0};
        for (char c:s1){
            if (arr[c-'a']>0) return true;
            arr[c-'a']++;
        }
        for (char c:s2){
            if(arr[c-'a']>0)
                return true;
        }
        return false;
    }
    
    int maxLength(vector<string>& arr) {
        int i=0;
        int n =arr.size();
        string temp="";
        return solve(i,arr,temp,n);
    }
    
    int solve (int i,vector<string>&arr,string temp,int &n){
        
        if (i>=n){
            return temp.length();
        }
        
        int include=0;
        int exclude=0;
        
        if (isDuplicate(arr[i],temp)){
            exclude=solve(i+1,arr,temp,n);
        }
        else{
            exclude=solve(i+1,arr,temp,n);
            temp=temp+arr[i];
            include =solve(i+1,arr,temp,n);
        }
        return max(include,exclude);
    }
};