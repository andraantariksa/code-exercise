pub fn factors(n: u64) -> Vec<u64> {
    let mut n = n;
    let mut prime_factors = Vec::new();
    let mut div = 2;
    while n > 1 {
        while n % div == 0 {
            prime_factors.push(div);
            n = n / div;
        }
        div += 1;
    }
    prime_factors
}
