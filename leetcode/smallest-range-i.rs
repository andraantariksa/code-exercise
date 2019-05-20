impl Solution {
    pub fn smallest_range_i(a: Vec<i32>, k: i32) -> i32 {
        *vec![0, (a.iter().max().unwrap() - a.iter().min().unwrap() - 2 * k)].iter().max().unwrap()
    }
}
