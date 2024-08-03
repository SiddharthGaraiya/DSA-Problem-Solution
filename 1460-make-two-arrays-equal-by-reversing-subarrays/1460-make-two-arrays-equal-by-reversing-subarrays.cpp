class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n = target.size();
        int freq[1001];
        memset(freq,0,sizeof(freq));
        for (int & val : target){
            freq[val]++;
        }
        
        for (int i =0;i<n;i++){
            if (freq[arr[i]]==0)
                return false;
            else freq[arr[i]]--;
        }
        
        return true;
    }
};