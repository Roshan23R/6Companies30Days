//Question 12
// Leetcode- 1392. Longest Happy Prefix
// TC - O(N), SC - O(N)
class Solution {
public:
    string longestPrefix(string s) {
        int n= s.length();
        //making pi array to update suffux as prefix count till that position
        vector<int> pi(n, 0);
        int j=0;
        for(int i=1;i<n;i++){
            while(j > 0 && s[i] != s[j])
                j = pi[j-1];
            if(s[i] == s[j])
                j++;
            pi[i]=j;
        } 
        int length=pi[n-1];
        int index=n-length;
        return s.substr(index, length);
    }
};