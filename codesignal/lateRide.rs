fn lateRide(n: i32) -> i32 {
    let hr = n / 60;
    let min = n % 60;
    (hr / 10) + (hr % 10) + (min / 10) + (min % 10)
}
