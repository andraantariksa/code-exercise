pub fn square_of_sum(n: u32) -> u32 {
    (n * (1 + n) / 2).pow(2)
}

pub fn sum_of_squares(n: u32) -> u32 {
    (1..=n).fold(0u32, |x, y| x+y.pow(2))
}

pub fn difference(n: u32) -> u32 {
    square_of_sum(n) - sum_of_squares(n)
}
