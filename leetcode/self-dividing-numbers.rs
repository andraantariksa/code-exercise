impl Solution {
    pub fn self_dividing_numbers(left: i32, right: i32) -> Vec<i32> {
        let mut v = Vec::new();
        let mut j;
        for i in left..=right {
            j = i;
            while j > 0 {
                if j % 10 == 0 || i % (j % 10) != 0 {
                    break;
                }
                j = j / 10;
            }
            if j == 0 {
                v.push(i);
            }
        }
        v
    }
}
