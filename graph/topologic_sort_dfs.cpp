class Solution
{
	public:
	
	void dfs(vector<int> adj[],int node,stack<int>& s,vector<int>& vis){
	    vis[node]=1;
	    
	    
	    for(auto i : adj[node]){
	        if(vis[i]==0)
	        dfs(adj,i,s,vis);
	    }
	    
	    s.push(node);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	  
	  stack<int> s;
	  
	  vector<int> vis(V,0);
	  
	  
	  for(int i=0;i<V;i++){
	      if(vis[i]==0){
	          dfs(adj,i,s,vis);
	      }
	  }
	  
	  
	  vector<int> ans;
	  
	  while(s.size()){
	      ans.push_back(s.top());s.pop();
	     
	  }
	  return ans;
	  
	}
};
