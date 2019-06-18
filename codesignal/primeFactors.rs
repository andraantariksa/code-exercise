fn primeFactors(mut n: i32) -> Vec<i32> {
    let mut curr_divisor: i32 = 2;
    let mut divisors = Vec::new();
    while n > 1 {
        if n % curr_divisor == 0 {
            divisors.push(curr_divisor);
            n /= curr_divisor;
        }else{
            curr_divisor += 1;
        }
    }
    divisors
}
