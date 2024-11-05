class Solution {
  public:
   void solve(int node, int par, vector<int> arr[], vector<int> & low, vector<int>& in , vector<int> &vis, set<int> & ans, int timer) {

       vis[node] = 1;
       low[node] = in[node] = timer++;

       int child = 0;
       for (auto i : arr[node]) {


              if (i == par) continue;

              if (vis[i]) {
                     low[node] = min(low[node], in[i]);
              }
              else {
              child++;
                     solve(i, node, arr, low, in, vis, ans, timer);

                     if (low[i] >= in[node] &&  par != -1) ans.insert(node);

                     low[node] = min(low[node], low[i]);
              }

       }

       if (par == -1 && child >= 2)
              ans.insert(node);


}

vector<int> articulationPoints(int n, vector<int>adj[]) {


       set<int> ans;

       vector<int> low(n);
       vector<int> in(n);
       vector<int> vis(n, 0);

       int timer = 0;


       for (int i = 0; i < n; i++) {
              if (!vis[i])
                     solve(i, -1, adj, low, in, vis, ans, timer);
       }
       
       if(ans.size()==0) return {-1};


       vector<int> k(ans.begin(), ans.end());
       return k;


}
};
