fn extraNumber(a: i32, b: i32, c: i32) -> i32 {
    [a, b, c].iter().fold(0, |acc, x| acc ^ x)
}
