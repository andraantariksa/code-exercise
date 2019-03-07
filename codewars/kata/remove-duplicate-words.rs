use std::collections::HashSet;

fn remove_duplicate_words(s: &str) -> String {
    s.split_whitespace()
        .fold(vec![], |mut x, y| match x.iter().find(|&z| *z == y) {
            None => {
                x.push(y);
                x
            }
            _ => x,
        })
        .join(" ")
}
