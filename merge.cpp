class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int N = intervals.size();
        vector<vector<int>> result;
        // sort
        sort(intervals.begin() , intervals.end());
        // the smallest interval is the first

        vector<bool> vis(N, false);
        for(int i=0;i<N;i++) {
            if(vis[i]== false) {
                vis[i] = true;

                int m = intervals[i][1];
                int n = intervals[i][0];
                for(int j=i+1;j<N;j++) {
                    // now check if there is an overlap
                    if(intervals[j][0] <= intervals[i][1]) {
                        //m = max(m , intervals[j][1]);
                        intervals[i][1] = max(intervals[j][1] ,intervals[i][1] );
                        vis[j] = true;
                    }
                    // else it is not part of the interval which means we can break 
                    // since the vector is sorted 
                    else {
                        break;
                    }
                }
                vector<int> temp = {intervals[i][0] , intervals[i][1]};
                result.push_back(temp);
            }
            
        }
        return result;

    }
};
