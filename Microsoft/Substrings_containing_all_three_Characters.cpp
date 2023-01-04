// Question 15
// Leetcode -1358. Number of Substrings Containing All Three Characters
// TC - O(n) , SC O(1)

//two pointer approach 
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> map(3, 0);
        int counter=0, i=0, j=0;
        int ans=0;
        while(j<s.size()){
            map[s[j++]-'a']++;
            while(map[0]>0 && map[1]> 0 && map [2]>0 && i<=j){
                map[s[i++]-'a']--;
                ans += s.size()-j+1;
            }
        }
        return ans;
    }
};