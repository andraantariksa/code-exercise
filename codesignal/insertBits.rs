fn insertBits(n: i32, a: i32, b: i32, k: i32) -> i32 {
    (n >> (b + 1) << (b + 1)) + (n & 2i32.pow(a as u32) - 1) + (k << a)
}
