pub fn is_armstrong_number(num: u32) -> bool {
    let num_s = num.to_string();
    num_s.chars().fold(0u32, |x, y| y.to_digit(10).unwrap().pow(num_s.len() as u32) + x) == num
}
