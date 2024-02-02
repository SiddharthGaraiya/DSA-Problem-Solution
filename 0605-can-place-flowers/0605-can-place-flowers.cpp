class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        for (int i=0;i<flowerbed.size();i++){
            if(i==0&&i==flowerbed.size()-1){
                if (flowerbed[i]==1&& n>=1)return false;
                else return true;
            }
            else if (i==0){
                if (flowerbed[i]==0&&flowerbed[i+1]==0){
                    n--;
                    flowerbed[i]=1;
                }
            }else if (i==flowerbed.size()-1){
                if (flowerbed[i]==0&&flowerbed[i-1]==0){
                    n--;
                    flowerbed[i]=1;
                }
            }else if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0){
                n--;
                flowerbed[i]=1;
            }
        }
        
        if (n<=0) return true;
        else return false;
    }
};