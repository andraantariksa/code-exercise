fn largestNumber(n: i32) -> i32 {
    if n == 0 {
        return n;
    }
    let mut out = 9;
    for i in 1..n {
        out *= 10;
        out += 9;
    }
    out
}