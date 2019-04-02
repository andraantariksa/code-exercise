fn get_age(age: &str) -> u32 {
  (age.chars().next().unwrap() as u8 - '0' as u8) as u32
}
