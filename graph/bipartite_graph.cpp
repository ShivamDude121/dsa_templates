class Solution {
public:

   bool solve(vector<vector<int>>& arr,int node,int color,vector<int>& vis){

    vis[node]=color;

    int next_color;
    if(color==0) next_color=1;
    else next_color=0;

   
    for( auto i : arr[node]){

        if(vis[i]==-1) {
            if(solve(arr,i,next_color,vis)==false) return false;
        }
        else if(vis[i]==color) return false;

    }


    return true;


   }
    bool isBipartite(vector<vector<int>>& graph) {


       int n=graph.size();
       vector<int> vis(n,-1);
      

      for(int i=0;i<n;i++){
        if(vis[i]==-1){
            if(solve(graph,i,0,vis)==false)
            return false;
        }
      }
       return true; 
    }
};
