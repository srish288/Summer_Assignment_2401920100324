class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,maxsum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
              sum+=nums[i];
        }
          maxsum=sum;
        for(int i=k;i<n;i++){
            sum=sum-nums[i-k]+nums[i];
            maxsum=max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};