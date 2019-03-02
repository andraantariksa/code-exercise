impl Solution {
    pub fn num_jewels_in_stones(j: String, s: String) -> i32 {
        let mut tot = 0;
        for c in j.chars() {
            for c2 in s.chars() {
                if c == c2 {
                    tot = tot + 1;
                }
            }
        }
        tot
    }
}
