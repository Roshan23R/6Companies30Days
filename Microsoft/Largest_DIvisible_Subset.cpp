//Question 5
//Leetcode - 368. Largest Divisible Subset
// TC - O(N^2), SC - O(2*N)
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        int lastIndex=0;
        //sort the nums
        sort(nums.begin(), nums.end());
        vector<int> dp(n ,1), hash(n);
        
        //for ex 1 2 3 8 ...if if 2 %1 ==0 then for 4 check only its divisible from 1 or not
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int prev=0;prev<i;prev++){
                if(nums[i]%nums[prev]==0  &&  1+dp[prev]>dp[i])
                {    dp[i]= 1+dp[prev]; 
                    hash[i] = prev;}
                }
            if(dp[i] > maxi){
                maxi=dp[i];
                lastIndex=i;
            }       
        }
        //as we push hash[i]=i so if its contains prev that means the greatest number for which it is divisible.
        vector<int> temp;
        temp.push_back(nums[lastIndex]);
        while(hash[lastIndex] != lastIndex){
            
            lastIndex=hash[lastIndex];
            temp.push_back(nums[lastIndex]);
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};