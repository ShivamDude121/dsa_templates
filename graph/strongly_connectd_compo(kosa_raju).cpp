class Solution
{
	public:
	//commented code for printing  scc compo.
    
void dfs_1(vector<vector<int>> &arr, int node, vector<bool>& vis, stack<int>& s) {


    vis[node] = true;

    for (auto i : arr[node]) {
        if (!vis[i])
            dfs_1(arr, i, vis, s);
    }
    s.push(node);
}


void dfs_2(vector<vector<int>> &arr, int node, vector<bool>& vis) {

    //cout<<node<<" ";
    vis[node] = true;

    for (auto i : arr[node]) {
        if (!vis[i])
            dfs_2(arr, i, vis);
    }
    
}


int kosaraju(int n, vector<vector<int>>& adj)
{

    vector<bool> vis(n, false);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs_1(adj, i, vis, s);
        }
    }


    vector<vector<int>> rev(n);

    for (int i = 0; i < n; i++) {
        for (auto j : adj[i]) {

            rev[j].push_back(i);

        }
    }

    vector<bool> vis_2(n,false);
    int ans=0;
    while(s.size()){

        int t=s.top();
        s.pop();

        if(!vis_2[t]){
            ans++;

            dfs_2(rev,t,vis_2);
            //cout<<endl
        }
    }
    
    return ans;





}
};
