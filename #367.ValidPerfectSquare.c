#include <stdbool.h>

bool isPerfectSquare(int num) {
    
int i=1; 

    if (num<=0) { 
        return false; 
    }
    while (1) { 

        if ((num%i==0)&&(i==num/i)) { 
            return true;  
        }
        else if (i>num/i) { 
            return false;  

        }
        i++; 

    }   
    return false;
}
