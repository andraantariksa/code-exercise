fn high_and_low(numbers: &str) -> String {
    format!(
        "{} {}",
        numbers
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .fold(std::i32::MIN, |x, y| if y > x { y } else { x }),
        numbers
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .fold(std::i32::MAX, |x, y| if y < x { y } else { x }),
    )
}
