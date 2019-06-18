
fn evenDigitsOnly(mut n: i32) -> bool {
    while n != 0 {
        if n % 2 != 0 {
            return false;
        }
        n /= 10;
    }
    true
}
