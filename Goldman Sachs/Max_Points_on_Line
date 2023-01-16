// Leetcode- 149. Max Points on a Line
/*Approach - using map keeping the slope value counts for each
point i to other point j */
// TC- O(n^2) SC - O(n^2) 
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size(); 
        int ans = INT_MIN;
        if(n==1)
            return 1;
        for(int i=0;i<n;i++)
        {
            unordered_map<double, int> map;
            int temp_max=0;
            int x1=points[i][0];
            int y1=points[i][1];
            for(int j=0;j<n;j++){
                if(j==i)
                    continue;
                
                int x2=points[j][0];
                int y2=points[j][1];

                double num= y2-y1;
                double den=x2-x1;

                if(den==0)
                    {
                        map[INT_MAX]++;
                        temp_max=max(temp_max, map[INT_MAX]);
                        continue;
                    }
                
                double slope = num/den;
                map[slope]++;
                temp_max=max(temp_max, map[slope]);
            }
        ans = max(ans , temp_max+1);}
        return ans;
    }
};