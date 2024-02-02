class Solution {
public:
    
    void transpose(vector<vector<int>>&matrix){
        int size=matrix[0].size();
        for (int i=0;i<size;i++){
            for (int j=i;j<size;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        
        for (int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};