impl Solution {
    pub fn rotate_string(a: String, b: String) -> bool {
        if b.len() != a.len() {
            return false;
        }
        let mut c = String::from(&a[..]);
        c.push_str(&a[..]);
        if *&c[..].contains(&b[..]) {
            true
        }else{
            false
        }
    }
}
