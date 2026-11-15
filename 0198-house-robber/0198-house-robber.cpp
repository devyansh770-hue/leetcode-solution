class Solution {
public:
    int find(vector<int>&nums,int i,int n,vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];

        int Nskip = nums[i] + find(nums,i+2,n,dp);
        int skip = find(nums,i+1,n,dp);

        int maxi = max(Nskip,skip);
        dp[i] = maxi;
        return maxi;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<int>dp(n,-1);
        int ans = find(nums,i,n,dp);
        return ans;
    }
};