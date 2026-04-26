class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int rows = matrix.size();
       int cols = matrix[0].size();

       vector<int> row(rows);
       vector<int> col(cols);

       for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
       }
        
        for(int i=0;i<rows;i++){
            if(row[i]==1){
                for(int j=0;j<cols;j++){
                    matrix[i][j]=0;
                }
            }
        }


         for(int j=0;j<cols;j++){
            if(col[j]==1){
                for(int i=0;i<rows;i++){
                    matrix[i][j]=0;
                }
            }
        }
    }
};