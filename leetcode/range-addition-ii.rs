impl Solution {
    pub fn max_count(m: i32, n: i32, ops: Vec<Vec<i32>>) -> i32 {
        if ops.len() == 0 {
            m * n
        }else{
            let mut a = std::i32::MAX;
            let mut b = std::i32::MAX;
            for i in 0..ops.len() {
                a = *vec![a, ops[i][0]].iter().min().unwrap();
                b = *vec![b, ops[i][1]].iter().min().unwrap();
            }
            a * b
        }
    }
}
