

int fib(int n){   

    int nxt=0; 
    int t1=0; 
    int t2=1; 

    for (int i=0; i<n; i++) { 
        nxt = t1 + t2; 
        t2 = t1; 
        t1 = nxt;  
    }
    return nxt; 

}
