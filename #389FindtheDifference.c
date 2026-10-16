
#include <string.h> 

char findTheDifference(char* s, char* t) {  

    
    char result=0; 

    for (int i=0; i<strlen(s); i++) { 
        result = s[i]^result;  
    }   
    for (int i=0; i<strlen(t); i++) { 
        result = t[i]^result;  
    }  
    return result; 
}
