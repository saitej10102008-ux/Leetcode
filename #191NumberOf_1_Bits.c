int hammingWeight(int n) {  

    int r=0; 
    int count=0;

        while (n!=0) {    
        r = n&1; 
        if (r==1) { 
            count++;
        } 
        n = n >> 1; 

    } 
    return count;
}
