impl Solution {
    pub fn count_bits(num: i32) -> Vec<i32> {
        (0..=num).map(|x| x.count_ones() as i32).collect()
    }
}
