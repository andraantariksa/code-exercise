impl Solution {
    pub fn fib(n: i32) -> i32 {
        match n {
            0 => 0,
            1 => 1,
            x => Self::fib(x - 1) + Self::fib(x - 2),
        }
    }
}
