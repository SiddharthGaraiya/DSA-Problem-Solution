class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n =tokens.size();
        
        int maxScore=0;
        int i =0,j=n-1;
        sort(tokens.begin(),tokens.end());
        
        int score=0;
        
        while (i<=j){
            if (power>=tokens[i]){
                power-=tokens[i];
                score+=1;
                i++;
                
                maxScore =max(score,maxScore);
            }
            else if (score>=1){
                power+=tokens[j];
                score-=1;
                j--;
    
            }
            else return maxScore;
        }
        return maxScore;
    }

};