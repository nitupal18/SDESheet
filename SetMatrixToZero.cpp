class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int col=1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                col=0;
            }
            /* cant go in zeroth column because matrix[0][0] can be zero coz matrix[i][0]=0 which will make matrix[0][j]=0 */
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=matrix[i][0]=0;
                }
            }
        }
        /* we can't go on first column here because it can be zero due to matrix[0][0] which is zero due to some other element */
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(col==0){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};