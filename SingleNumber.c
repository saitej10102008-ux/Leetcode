#include <stdio.h> 
int main (void) { 
    int n, a=0;
    printf("Enter the number of elemnets in the array: \n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements: \n");
    for (int i=0; i<n; i++) { 
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<n; i++) { 
        a = nums[i]^a;
    }
    printf("\n%d", a);
    return 0;
}
