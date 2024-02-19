class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string rs;
        string rt;
        
        for (char c:s){
            if (c!='#')
                rs.push_back(c);
            else if (!rs.empty())
                rs.pop_back();
        }
        for (char c:t){
            if (c!='#')
                rt.push_back(c);
            else if (!rt.empty())
                rt.pop_back();
        }
        return rs==rt;
    }
};