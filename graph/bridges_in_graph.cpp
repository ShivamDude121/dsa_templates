class Solution {
public:
    void solve(int node ,int par,vector<vector<int>>& grid,vector<vector<int>>& ans, vector<int>& low, vector<int>& in , vector<int>& vis, int & timer){
        vis[node]=1;
        low[node]=timer;
        in[node]=timer;
        timer++;

        for(auto i : grid[node]){
            if(i == par) continue;

            if(vis[i]){
                low[node]=min(low[node],in[i]);
            }
            else{
                solve(i,node,grid,ans,low,in,vis,timer);
                if(low[i]>in[node]) ans.push_back({i,node});
                low[node]=min(low[node],low[i]);
            }
        }
    }


    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

        vector<vector<int>>  grid(n);

        for(auto i : connections){
            grid[i[0]].push_back(i[1]);
            grid[i[1]].push_back(i[0]);
        }

        vector<int> low(n,0);
        vector<int> in(n,0);
        vector<int> vis(n,0);
        int timer=0;

        vector<vector<int>> ans;
        solve(0,-1,grid,ans,low,in,vis,timer);
        return ans;
        
    }
};
