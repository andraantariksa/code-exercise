fn get_middle(s: &str) -> &str {
    &s[s.len() / 2 - if s.len() % 2 == 0 { 1 } else { 0 }..s.len() / 2 + 1]
}
