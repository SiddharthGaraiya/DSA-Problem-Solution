class Solution {
public:
    bool checkFreq(string&s){
        bool arr[26];
        for (char &c:s){
            if (arr[c-'a'])
                return true;
            arr[c-'a']=true;
        }
        return false;
    }
    
    
    bool buddyStrings(string s, string goal) {
        if (s.length()!=goal.length())return false;
        
        if (s==goal){
            return checkFreq(s);
        }
        
        vector<int>index;
        
        for (int i =0;i<s.length();i++){
            if (s[i]!=goal[i])
                index.push_back(i);
        }
        
        if (index.size()!=2)return false;
        
        swap(s[index[0]],s[index[1]]);
        
        return s==goal;
    }
};