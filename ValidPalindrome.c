#include <stdbool.h> 
#include <string.h>


bool isPalindrome(char *s)
{
    int stringlength, left, right;

    stringlength = strlen(s);
    left = 0;
    right = stringlength - 1;

    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9'))
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
    }

    while (left < right)
    {
        while ((left < right) &&
               (s[left] < 'A' || s[left] > 'Z') &&
               (s[left] < 'a' || s[left] > 'z') &&
               (s[left] > '9' || s[left] < '0'))
        {
            left++;
        }

        while ((left < right) &&
               (s[right] < 'A' || s[right] > 'Z') &&
               (s[right] < 'a' || s[right] > 'z') &&
               (s[right] > '9' || s[right] < '0'))
        {
            right--;
        }

        if (s[left] != s[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
