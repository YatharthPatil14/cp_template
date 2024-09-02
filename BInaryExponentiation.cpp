int pow(int base, int p) {
    if (base == 1 || p == 0) { return 1; }
    if (base == 0) { return 0; }
    ll output = 1, b = base;
    while(p > 0) {
        if (p & 1) { (output *= b) %= MOD; }
        p >>= 1;
        b = (b * b) % MOD;
    }
    return output;
}
