class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	    int in_dg[V]={0};
	    
	    for(int i=0;i<V;i++){
	        for(auto j : adj[i])
	        in_dg[j]++;
	    }
	    
	    
	    queue<int> q;
	    
	    for(int i=0;i<V;i++){
	        if(in_dg[i]==0){
	            q.push(i);
	            in_dg[i]=-1;
	        }
	    }
	    
	    
	    vector<int> ans;
	    
	    while(q.size()){
	        int x=q.front();
	        q.pop();
	        ans.push_back(x);
	        
	        for(auto i : adj[x]){
	            in_dg[i]--;
	        }
	        
	    for(int i=0;i<V;i++){
	        if(in_dg[i]==0){
	            q.push(i);
	            in_dg[i]=-1;
	        }
	    }
	    }
	    
	    return ans;
	    
	}
};
