impl Solution {
    pub fn peak_index_in_mountain_array(a: Vec<i32>) -> i32 {
        let mut b = std::i32::MIN;
        let mut c = 0;
        for i in a.iter() {
            if i < &b {
                c -= 1;
                break;
            }
            c += 1;
            b = *i;
        }
        c
    }
}
