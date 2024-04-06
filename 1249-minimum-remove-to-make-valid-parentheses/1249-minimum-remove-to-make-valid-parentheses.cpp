class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n =s.length();
        stack<int> st;
        
        unordered_set<int> d;
        
        for (int i =0;i<n;i++){
            if (s[i]=='('){
                st.push(i);
            }else if (s[i]==')'){
                if (st.empty()){
                    d.insert(i);
                }else {
                    st.pop();
                }
            }
        }
        
        while (!st.empty()){
            d.insert(st.top());
            st.pop();
        }
        
        string result ="";
        
        for (int i=0;i<n;i++){
            if (d.find(i)==d.end()){
                result.push_back(s[i]);
            }
        }
        
        return result;
    }
    
};