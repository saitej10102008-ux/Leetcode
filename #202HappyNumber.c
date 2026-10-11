#include <stdbool.h>  

bool isHappy(int n) { 

int new=0; 
int nums[1000]; 
int r; 
int i=0; 

    if (n==0) { 
        return false; 
    }


    while (n!=0) { 
        new=0;  

        while (n!=0) {  
            r = n % 10; 
            new = r*r + new; 
            n = n / 10; 

        } 

        nums[i] = new; 
        i++; 

        for (int j=0; j<i-1; j++) { 
            if (new==nums[j]) { 
                return false;   
            } 
        } 
        
        n = new; 
        if (n==1) { 
            return true;  
        } 
    }
    return false;
}


