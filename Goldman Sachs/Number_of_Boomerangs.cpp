// Leetcode - 447. Number of Boomerangs
// Approach - For each point i we try to find out distance between point i and point j and if two distance are more than once than we could make combination of (count) * (count-1) tuples
// TC - O(n^2)
class Solution {
public:
    int distance(vector<int>& a, vector<int> &b){
            return pow(b[0] - a[0] , 2) + pow(b[1] - a[1],2);
        }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int d, res=0;
        for(int i=0;i<points.size();i++){

            unordered_map<int, int> mp;

            for(int j=0;j<points.size();j++){
                if(i==j)    continue;
                d=distance(points[i], points[j]);
                mp[d]++;
            } 
            for(auto p:mp){
                if(p.second>1)
                    res+= (p.second)*(p.second-1);
            }
        }
    return res;
    }
};