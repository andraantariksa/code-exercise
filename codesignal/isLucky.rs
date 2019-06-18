fn isLucky(mut n: i32) -> bool {
    let mut half_digit = ((n as f64).log10() as i32 + 1) / 2;
    let mut sum_first = 0;
    let mut sum_second = 0;
    for _ in 0..half_digit {
        sum_first += n % 10;
        n /= 10;
    }
    for _ in 0..half_digit {
        sum_second += n % 10;
        n /= 10;
    }
    sum_first == sum_second
}
