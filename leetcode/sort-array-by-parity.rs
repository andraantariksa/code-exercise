impl Solution {
    pub fn sort_array_by_parity(a: Vec<i32>) -> Vec<i32> {
        let mut out: Vec<i32> = a.clone().into_iter().filter(|x| *x % 2 == 0).collect();
        out.append(&mut a.into_iter().filter(|x| *x % 2 != 0).collect());
        out
    }
}
