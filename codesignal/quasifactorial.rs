fn quasifactorial(n: i32) -> i32 {
    if n == 1 {
        1
    }else{
        n * quasifactorial(n - 1) - 1
    }
}
