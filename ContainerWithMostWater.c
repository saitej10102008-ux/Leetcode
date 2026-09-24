#include <stdio.h>
int main (void) { 
    int size, area=0, current_area=0;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int height[size];
    printf("Enter the elements: \n");
    for (int i=0; i<size; i++) { 
        scanf("%d", &height[i]);
    } 
    int left = 0;
    int right = size-1;
    while (left<right) { 
        if (height[left]>height[right]) { 
            current_area = (right-left)*height[right];
            right--;
        } 
        else { 
            current_area = (right-left)*height[left];
            left++;
        }
        if (area<current_area) { 
            area = current_area;
            }
    }
    printf("%d\n", area);


    return 0;
}
