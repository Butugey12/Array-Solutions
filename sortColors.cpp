class Solution {
public:
    void sortColors(vector<int>& nums) {
        // first get the count of 0,1 and 2
        //then fill in the array starting from the count of zero , then
        // the count of one then the count of two.
        int N = nums.size();
        int countZero=0;
        int countOne=0;
        int countTwo=0;
        for(int i=0; i<N ;i++) {
            if(nums[i]==0) countZero++;
            if(nums[i]==1) countOne++;
            if(nums[i]==2) countTwo++;
        }

        // fill from 0 to countZero with 0s
        for(int i=0;i<countZero;i++) {
            nums[i]=0;
        }
        
        //fill from countZero to countZero+countone with 1s
        for(int i=countZero;i<countZero+countOne;i++) {
            nums[i]=1;
        }
        // fill from countZero+countOne with countZero+countOne+countTwo or N
        for(int i= countZero+countOne;i<countZero+countOne+countTwo;i++) {
            nums[i]=2;
        }
        // so now we have something like {0,0,1,1,2,2}
        // this is not the optimal solution , but it is better than the
        // brute force and this is O(2N)
        

       

    }
};
