fn fibbonacci(n: usize) -> Vec<u64>{
    let mut fib = vec![0u64; n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for i in 2..n + 1 {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    fib
}

fn perimeter(n: u64) -> u64 {
    let fib = fibbonacci(75);
    let mut tot = 0;
    for i in 0..=(n + 1) as usize {
        tot += fib[i]*4;
    }
    tot
}
