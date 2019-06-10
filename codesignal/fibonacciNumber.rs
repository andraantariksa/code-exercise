fn fibonacciNumber(n: i32) -> i32 {
    let mut fib = [0, 1, 1];
    for i in 0..n {
        fib[0] = fib[1];
        fib[1] = fib[2];
        fib[2] = fib[0] + fib[1];
    }
    fib[0]
}
