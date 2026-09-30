bool isPalindrome(int x)
{
    int r;
    long long rev = 0;
    int dup = x;

    if (x < 0)
        return false;

    while (x != 0)
    {
        r = x % 10;
        rev = rev * 10 + r;
        x = x / 10;
    }

    if (dup == rev)
        return true;
    else
        return false;
}
