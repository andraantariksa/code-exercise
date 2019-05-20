fn square_sum(vec: Vec<i32>) -> i32 {
    vec.iter().fold(0, |x, y| x+y.pow(2))
}
