#include <limits.h>

int reverse(int x)
{
    int r;
    int reverse = 0;

    while (x != 0)
    {
        r = x % 10;

        long long temp = (long long)reverse * 10 + r;

        if (temp > INT_MAX || temp < INT_MIN)
            return 0;

        reverse = (int)temp;
        x = x / 10;
    }

    return reverse;
}
