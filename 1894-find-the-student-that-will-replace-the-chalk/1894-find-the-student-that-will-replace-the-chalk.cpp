class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long int sum = 0;
        for (int & i : chalk){
            sum += i;
        }
        k = k % sum;
        
        int i = 0;
        while(chalk[i]<=k){
            k-=chalk[i];
            i++;
        }
        return i;
    }
};