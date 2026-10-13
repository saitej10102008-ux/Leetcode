#include <stdbool.h> 

bool isPowerOfFour(int n) { 
    int count=0; 
        if (n>0 && (n & (n-1)) == 0) { 
        while (n!=0) { 
            n = n >> 1; 
            count++;
        } 
    }

    else {   
        return false;
    }

    if ((count-1)%2==0) { 
        return true;
            
    }
    else {
        return false; 
    } 
    
}
