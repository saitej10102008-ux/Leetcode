int tribonacci(int n) {
    int t0 = 0;
    int t1 = 1;
    int t2 = 1;
    int nxt = 0;

    if (n < 3) {
        if (n == 0) return 0;
        else return 1;
    } else {
        for (int i = 2; i < n; i++) {
            nxt = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = nxt;
        }
        return nxt;
    }
}  
