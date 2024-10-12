    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
      queue<int> q;
      vector<int> ans;
      vector<int> vis={0};
      
      
      q.push(0);
      vis[0]=1;
      while(q.size()){
          int temp=q.front();
          q.pop();
          ans.push_back(temp);
          for(auto i : adj[temp]){
              if(!vis[i]){
                  vis[i]=1;
                  q.push(i);
              }
          }
          
      }
      
      
      return ans;
    }
