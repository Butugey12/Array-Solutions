class Solution {
   
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n = matrix.size();
       int m = matrix[0].size();

       queue<pair<int,int>> q;
       for(int i=0;i<n;i++) {
           for(int j=0;j<m;j++) {
               if(matrix[i][j]==0) {
                   q.push({i,j});
               }
           }
       }

       while(!q.empty()) {
           int r = q.front().first;
           int c = q.front().second;

           q.pop();

        // loops through the entire column while the row is constant;
        for(int i=0;i<m;i++) {
             matrix[r][i]=0;

        }
        //loop thriugh the entire row while the col is constant;

        for(int i=0;i<n;i++) {
            matrix[i][c]=0;
        }
       }
    }
};
