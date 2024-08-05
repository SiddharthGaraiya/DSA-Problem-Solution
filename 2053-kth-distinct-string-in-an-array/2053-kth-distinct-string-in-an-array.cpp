class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        map<string,int> mp;
        int counter=0;
        for (string &s : arr)mp[s]++;
        for (string &s : arr){
            if (mp[s]>1)continue;
            counter++;
            if (counter==k) return s;
        }   
        return "";
    }
};