def totient(n) :          # n - unsigned int
    result = 1
    p = 2                 #prime numbers - 'iterator'
    while p**2 <= n :
        if(n%p == 0) :    # * (p-1)
            result *= (p-1)
            n /= p
        while(n%p == 0) : # * p^(k-1)
            result *=  p
            n /= p
        p += 1
    if n != 1 :
        result *= (n-1)
    return result
 
def modpow(p, z, b, c, m) : # (p^z)^(b^c) mod m
    if m == 2:
        return p % m
    cp = 0
    while m % p == 0 :
        cp += 1
        m /= p              # m = m' now
    t = int(totient(m))
    exponent = ((pow(int(b), int(c), int(t)) * z) % t + t - (cp % t)) % t
    return pow(int(p), int(cp)) * pow(int(p), int(exponent), int(m))
 
def solve(a,b,c,m) : #split
    result = 1
    p = 2
    while p**2 <= a:
        cp = 0
        while a%p == 0 :
            a /= p
            cp += 1
        if cp != 0 :
           temp =  modpow(p, cp, b, c, m)
           result *= temp
           result %= m
        p += 1
    if a != 1 :
        result *= modpow(a, 1, b, c, m)
    return result % m

a, b, c, m = tuple(map(int, input().split()))
print(solve(a, b, c, m) + 1)