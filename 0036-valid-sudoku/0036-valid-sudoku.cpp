class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        unordered_set<string> st;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] != '.') {
                    string s1 = "row" + to_string(i) + "num" + board[i][j];
                    string s2 = "col" + to_string(j) + "num" + board[i][j];
                    string s3 = "grid" + to_string(i / 3) + to_string(j / 3) + "num" + board[i][j];
                    
                    if (st.find(s1) != st.end() || st.find(s2) != st.end() || st.find(s3) != st.end())
                        return false;
                    
                    st.insert(s1);
                    st.insert(s2);
                    st.insert(s3);
                }
            }
        }
        
        return true;
    }
};
