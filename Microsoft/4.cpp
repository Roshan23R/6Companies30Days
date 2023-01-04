//Question 11
// Leetcode -1976. Number of Ways to Arrive at Destination

#define ll long long
class Solution {
public:
    int mod=1e9+7;
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<ll, ll>> adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<pair<ll,ll> , vector<pair<ll,ll>> ,greater<pair<ll, ll>>> pq;
        vector<ll> dist(n, LONG_MAX), ways(n,0);
        dist[0]=0;ways[0]=1;
        pq.push({0,0});
        while(!pq.empty()){
            auto it = pq.top();
            ll dis=it.first;
            ll node=it.second;
            pq.pop();
            for(auto it: adj[node]){
                ll adjNode=it.first;
                ll edW=it.second;
                if(dis+edW < dist[adjNode]){
                    dist[adjNode] = dis+edW;
                    pq.push({dis+edW, adjNode});
                    ways[adjNode]=ways[node];
                }
                else if(dis+edW == dist[adjNode]){
                    ways[adjNode]=(ways[node]+ways[adjNode]);
                    ways[adjNode]%=mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};