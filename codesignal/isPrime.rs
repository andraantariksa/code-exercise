fn isPrime(n: i32) -> bool {
    n == 2 || (n %2 != 0 && !(3..=(n as f64).sqrt() as i32).step_by(2).any(|x| n % x == 0))
}
