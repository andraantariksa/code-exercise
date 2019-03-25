impl Solution {
    pub fn repeated_n_times(a: Vec<i32>) -> i32 {
        let mut z: std::collections::HashMap<i32, usize> = std::collections::HashMap::new();
        for i in a.iter() {
            *z.entry(*i).or_insert(0) += 1;
        }
        for (k, v) in z.iter() {
            if *v == a.len() / 2 {
                return *k;
            }
        }
        0
    }
}
