const int N = 2'00'000;
int fact[N + 1];
int fact_inv[N + 1];

int pow(int a, int b) {
    ll out = 1, x = a;
    while(b > 0) {
        if (b & 1) 
            { (out *= x) %= MOD; }
        b >>= 1;
        (x *= x) %= MOD;
    }
    return out;
}

void pre() {
    fact[0] = fact_inv[0] = fact [1] = fact_inv[1] = 1;
    for (int i = 2; i <= N; ++i) {
        fact[i] = (1LL * fact[i-1] * i) % MOD;
        fact_inv[i] = pow(fact[i], MOD - 2);
    }
}

int C(int n, int r) {
    if (r > n) return 0;
    ll t = fact[n];
    t = (t * fact_inv[n - r]) % MOD;
    t = (t * fact_inv[r]) % MOD;
    return t;
}
