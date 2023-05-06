class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // first transpose the matrix 
        // then reverse it.
        int n = matrix.size();

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                //matrix[i][j] = matrix[j][i];
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        // now reverse each row
        for(int i=0;i<n;i++) {
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};
