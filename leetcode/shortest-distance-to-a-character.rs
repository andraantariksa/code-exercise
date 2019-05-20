impl Solution {
    pub fn shortest_to_char(s: String, c: char) -> Vec<i32> {
        let mut v: Vec<i32> = Vec::new();
        for i in s.chars() {
            if i == c {
                v.push(0);
            } else {
                v.push(-1);
            }
        }
        let mut j = 0;
        let mut k = 0;
        for i in 0..v.len() {
            if v[i as usize] == 0 {
                for h in 1..i + 1 {
                    if v[(i - h) as usize] != -1 {
                        break;
                    }
                    v[(i - h) as usize] = h as i32;
                }
            }
        }
        for i in (0..v.len()).rev() {
            if v[i as usize] == 0 {
                for h in 1..(v.len() - 1) - i + 1 {
                    if v[(i + h) as usize] != -1
                        && (v[(i + h) as usize] == 0 || v[(i + h) as usize] <= (h as i32))
                    {
                        break;
                    }
                    v[(i + h) as usize] = h as i32;
                }
            }
        }
        v
    }
}
