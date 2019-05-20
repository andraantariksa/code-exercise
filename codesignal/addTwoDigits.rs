fn addTwoDigits(n: i32) -> i32 {
    n.to_string()
        .chars()
        .fold(0, |x, c| x + c.to_digit(10).unwrap() as i32)
}
