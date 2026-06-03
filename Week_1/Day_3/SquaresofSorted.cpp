class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1,ind=n-1;
        vector<int> ans(n);
        while(left<=right){
            if(abs(nums[left])<abs(nums[right])){
                ans[ind]=nums[right]*nums[right];
                right--;
            }
            else{
                ans[ind]=nums[left]*nums[left];
                left++;
            }
            ind--;
        }
        return ans;

    }
};