int pow(int a, int b) {
    int out = 1;
    while (b > 0) {
        if (b & 1) 
            { (out *= a) %= MOD; }
        b >>= 1;
        (a *= a) %= MOD;
    }
    return out;
}

const int N = 2'00'000;
int fact[N + 1];
int fact_inv[N + 1];
bool done = false;

void pre() {
    fact[0] = fact_inv[0] = fact [1] = fact_inv[1] = 1;
    for (int i = 2; i <= N; ++i) {
        fact[i] = (fact[i-1] * i) % MOD;
        fact_inv[i] = pow(fact[i], MOD - 2);
    }
}

int C(int n, int r) {
    if(!done) { pre; done = true;}
    if (r > n) return 0;
    return (((fact[n] * fact_inv[n - r]) % MOD) * fact_inv[r]) % MOD;
}
