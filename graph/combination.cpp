int nCr(int n,int r){

  int ans =1;
  for(int i=0;i<r;i++){
    ans=ans*(n-i);
    ans=ans/(i+1);
}

return ans;
}
