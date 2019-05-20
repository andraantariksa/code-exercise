impl Solution {
    pub fn sorted_squares(a: Vec<i32>) -> Vec<i32> {
        a.iter().map(|x| x.pow(2)).collect::<i32>()
    }
}
