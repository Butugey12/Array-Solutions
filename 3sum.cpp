class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i=0;i<n;i++) {
            int j =i+1;
            int k = n-1;
            while(j<k) {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0) {
                    vector<int> temp = {nums[i] , nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    j++;
                    k--;
                }
                else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
                
            }

        }
        vector<vector<int>> output(st.begin() , st.end());
        return output;
    }
};
