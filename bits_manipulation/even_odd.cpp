bool check(int n){
        
        return (n&1);
    }
  
  
    string oddEven(int n) {
        
        if(check(n)) return "odd";
        return "even";
        
    
    }
