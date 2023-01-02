//Question 4
// Leetcode- 299. Bulls and Cows

//TC - O(n)  SC - O(n)
class Solution {
public:
    string getHint(string secret, string guess) {
    int bulls =0, cows =0;
    unordered_map<char, int> mp;
        for(int i=0;i<secret.length();i++){
            char s= secret[i];
            char g= guess[i];
            if(s==g)
            {   bulls++;
                secret[i]='$';
                guess[i]='$';
            }
            else
                mp[s]++;   
        }
        cout<<secret<<" "<<guess;
        for(int i=0;i<guess.length();i++){
            if(guess[i]!='$')
                {   
                    if(mp[guess[i]]>0)
                    {    cows++;
                        mp[guess[i]]--;}
                }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};