int climbStairs(int n) {
    int previous = 0;
    int current = 1;
    int total = 0;

    for (int i = 0; i < n; i++) {
        total = previous + current;
        previous = current;
        current = total;
    }

    return total;
}
