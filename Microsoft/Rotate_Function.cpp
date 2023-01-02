//Question 4
//Leetcode 396. Rotate Function

//TC - O(n)
//SC - O(n)
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        else if(n==2)
            return max(nums[0], nums[1]);
        int sum=0, F0=0 , ans=INT_MIN;
        for(int i=0; i< n ; i++){
            sum+= nums[i];
            F0 += i* nums[i];
        }
        
        vector<int> dp(n);
        dp[0] = F0;
        ans = dp[0];
        for(int i=1; i< n ;i++){
            dp[i] = dp[i-1] + sum - n * nums[n-i];
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};