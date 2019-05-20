fn camel_case(str: &str) -> String {
    str.split_whitespace().map(|x| {
        let mut v: Vec<char> = x.chars().collect();
        v[0] = v[0].to_ascii_uppercase();
        v.iter().collect::<String>()
    }).collect()
}
