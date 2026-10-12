#include <stdlib.h> 


int* countBits(int n, int* returnSize) {  

    int count = 0; 
    int r = 0; 
    int x = 0; 
    int *nums = malloc((n + 1) * sizeof(int));

        for (int i=0; i<=n; i++) {  

            x = i; 

        while (x!=0) { 

            r = x&1;   
            if (r == 1) { 
                count++;  
            }  
            x = x >> 1; 

        }     

        nums[i] = count; 
        count = 0;  
      
    }  
    if (nums == NULL) {

        *returnSize = 0;
        return NULL;

    }
        *returnSize = n+1; 
        return nums;

    } 
