class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum=0;
        int N = nums.size();
        for(int i=0;i<N;i++) {
            sum+=nums[i];
            // if you current sum is bigger than what you had as maxi , 
            // then your maxi should be updated to what sum is.
            if(sum>maxi) {
                maxi=sum;
            }
            // if the sum is negative , then just make it equal to 0;
            // this means that you are starting a new subarray.
            if(sum<0) {
                sum=0;
            }
        }
        return maxi;
    }
};
