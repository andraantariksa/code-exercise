fn accum(s: &str) -> String {
    let mut i = 0;
    let mut s_ = Vec::new();
    let mut s__;
    for c in s.chars() {
        s__ = String::new();
        s__.push(c.to_ascii_uppercase());
        for j in 0..i {
            s__.push(c.to_ascii_lowercase());
        }
        s_.push(s__);
        i = i + 1;
    }
    s_.join("-")
}
