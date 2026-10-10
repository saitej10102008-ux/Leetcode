
#include <stdio.h>

int main(void) {
    int n, temp, count = 0, pass = 0;
    int swapped;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int nums[n];

    printf("Enter numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        pass++;

        for (int j = 0; j < n - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;

                count++;
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    printf("\nTotal swaps: %d\n", count);
    printf("Total passes: %d\n", pass);

    return 0;
}
