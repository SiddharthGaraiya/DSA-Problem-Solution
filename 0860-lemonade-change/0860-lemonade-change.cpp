class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n =bills.size();
        int fiveCount=0;
        int tenCount=0;
        for (int i =0;i<n;i++){
            if (bills[i]==5)
                fiveCount++;
            else if (bills[i]==10)
            {
                if (fiveCount>0)
                {
                    fiveCount--;
                    tenCount++;
                }
                else return false;
            }
            else if (bills[i]==20){
                if (fiveCount>0 &&tenCount>0){
                    fiveCount--;
                    tenCount--;
                }
                else if (fiveCount>2){
                    fiveCount-=3;
                }
                else return false;
            }
        }
        
        return true;
    }
};