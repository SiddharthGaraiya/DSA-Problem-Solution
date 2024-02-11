class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n =sentence.size();
        unordered_set<char>st;
        for (char c:sentence){
            st.insert(c);
        }
        if (st.size()!=26)return false;
        else return true;
    }
};