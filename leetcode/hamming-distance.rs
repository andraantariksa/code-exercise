impl Solution {
    pub fn hamming_distance(x: i32, y: i32) -> i32 {
        let mut dist: i32 = 0;
        let mut val = x ^ y;
        while val > 0 {
            if val & 1 != 0 {
                dist += 1;
            }
            val /= 2;
        }
        dist
    }
}
