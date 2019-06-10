fn cipher26(message: String) -> String {
    let mut s_out = String::new();
    let (mut sub, mut prev) = (0, 0);
    for i in message.chars() {
        let t = i as i32 - 97;
        sub = t - prev;
        if sub < 0 {
            sub += 26;
        }
        s_out.push((sub as u8 + 97) as char);
        prev = t;
    }
    s_out
}
