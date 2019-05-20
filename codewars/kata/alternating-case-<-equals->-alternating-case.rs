use std::ascii::AsciiExt;

fn to_alternating_case(s: &str) -> String {
    s.to_string()
        .chars()
        .map(|x| {
            if x.is_alphabetic() {
                if x.is_lowercase() {
                    x.to_ascii_uppercase()
                } else {
                    x.to_ascii_lowercase()
                }
            } else {
                x
            }
        })
        .collect()
}
