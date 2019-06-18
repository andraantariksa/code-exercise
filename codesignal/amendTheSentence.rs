fn amendTheSentence(s: String) -> String {
    let mut out = String::new();
    for (i, c) in s.chars().enumerate() {
        if c.is_uppercase() {
            if i != 0 {
                out.push(' ');
            }
            out.push(c.to_ascii_lowercase());
        }else{
            out.push(c);
        }
    }
    out
}
