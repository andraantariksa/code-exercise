fn grow(array: Vec<i32>) -> i32 {
    array.iter().fold(1, |x, y| x*y)
}
