fn nb_dig(n: i32, d: i32) -> i32 {
    (0..=n)
        .map(|x| x.pow(2).to_string())
        .fold(0, |x, y| x + &y.split(&d.to_string()).count() - 1) as i32
}
