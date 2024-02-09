class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        
        int i=0;
        int j=n-1;
        int maxArea=0;
        
        while (i<j){
            int ht=min(height[i],height[j]);
            int width=j-i;
            int area=ht*width;
            maxArea=max(area,maxArea);
            
            if(height[i]>height[j])
                j--;
            else
                i++;
        }
        return maxArea;
    }
};