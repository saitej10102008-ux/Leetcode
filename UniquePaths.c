int uniquePaths(int m, int n) {
    long long nr = 1;
    int j = 1;

    for (int i = m; i <= m + n - 2; i++) {
        nr = nr * i / j;
        j++;
    }

    return (int)nr;
}
