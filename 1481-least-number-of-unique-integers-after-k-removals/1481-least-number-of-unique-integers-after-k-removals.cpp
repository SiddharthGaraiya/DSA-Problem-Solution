class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n =arr.size();
        
        unordered_map<int,int>mp;
        for (int &a:arr){
            mp[a]++;
        }
        
        vector<int>freq;
        for (pair p:mp){
            freq.push_back(p.second);
        }
        
        sort(freq.begin(),freq.end());
        
        for (int i =0;i<freq.size();i++){
            k-=freq[i];
            if (k<0)
                return freq.size()-i;
        }
        
        return 0;
    }
};