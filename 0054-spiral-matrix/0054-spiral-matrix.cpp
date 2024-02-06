class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n = matrix[0].size();
        
        int top=0;
        int bottom=m-1;
        int left=0;
        int right =n-1;
        
        vector<int> result;
        
        int id=0;
        // id=0 for left to right
        // id=1 for top to bottom
        // id =2 for right to left
        // it=3 for bottom to top
        
        while (bottom>=top&&right>=left){
            if (id==0){
                //left to right
                //fix:top
                for (int i=left;i<=right;i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            
            if (id==1){
                //top to bottom
                // fix:right 
                for (int i =top ;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            
            if (id==2){
                // right to left
                // fix:bottom
                for (int i=right ;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (id==3){
                // bototom to top
                // fix:left
                
                for (int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            
            id++;
            if (id==4)
                id=0;
        }
        return result;
    }
};