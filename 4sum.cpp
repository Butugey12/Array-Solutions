class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int z= j+1;
                int k= n-1;
                while(z<k) {
                    long sum = nums[i]+ nums[j];
                    sum+=nums[z];
                    sum+=nums[k];
                    if(sum== target) {
                        vector<int> temp = {nums[i], nums[j] , nums[z] , nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                        z++;
                        k--;
                    }
                    else if(sum< target) {
                        z++;
                    }
                    else {
                        // too positive , you need negative numbers , so go left
                        k--;
                    }
                }
            }
        }
        vector<vector<int>> output(st.begin() , st.end());
        return output;
    }
};
