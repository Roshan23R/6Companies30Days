// LeetCode - 2260. Minimum Consecutive Cards to Pick Up
//Approach - keeping the cards position in map and if it again comes then find distance from earlier location . And if its minimum distance then return as ans.
//TC- O(n) , SC - O(n)
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int , int> mp;
        int distance=0;
        int flag=0;
        int mini = INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(mp.find(cards[i])!=mp.end())
            {
                distance = i - mp[cards[i]] + 1;  //distance between earlier same card and card taken now 
                mini = min(distance, mini); 
                flag=1;  //flag is used to denote that some card matched so ans can't be -1 for that case
            }
            mp[cards[i]]=i;      
        }
        if(flag==0) return -1;
        return mini;
    }
};