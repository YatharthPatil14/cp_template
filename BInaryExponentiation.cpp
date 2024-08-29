int pow(int base, int power) {
    if (base == 1 || power == 0) {return 1;}
    if (base == 0) {return 0;}
    ll result = 1;
    while(power > 0) {
        if (power & 1) {(result *= base) %= MOD;}
        power >>= 1;
        base = (base * base) % MOD;
    }
    return result;
}
