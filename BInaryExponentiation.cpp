int pow(int b, int p) {
    if (b == 1 || p == 0) { return 1; }
    if (b == 0) { return 0; }
    ll output = 1, base = b;
    while(p > 0) {
        if (p & 1) { (output *= base) %= MOD; }
        p >>= 1;
        (base *= base) %= MOD;
    }
    return output;
}
