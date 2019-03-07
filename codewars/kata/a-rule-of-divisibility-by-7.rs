fn seven(mut n: i64) -> (i64, i32) {
    let mut step = 0;
    let mut s: String;
    while n >= 100 {
        s = n.to_string();
        n = &s[0..s.len() - 1].parse().unwrap()
            - (2 * &s[s.len() - 1..s.len()].parse().unwrap()) as i64;
        step = step + 1;
    }
    (n, step)
}
