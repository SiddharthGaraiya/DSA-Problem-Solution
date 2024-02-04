class Solution {
public:
    int next(int l,vector<int> &changed){
        while(l<changed.size() && changed[l]==-1){
            l++;
        }
        return l;
    }
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        int l=0,h=1,n=changed.size(),count=0;
        if(n%2) return {};
        vector<int> ans;
        while(h<n){
            if((long long)changed[l]*2==changed[h]){
                count++;
                ans.push_back(changed[l]);
                changed[l]=-1;
                changed[h]=-1;
                l=next(l,changed);
                h++;
                if(l==h) h++;
            }else{
                h++;
            }
        }
        if(count!=n/2) ans={};
        return ans;

    }
};
