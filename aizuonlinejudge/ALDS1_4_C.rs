fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Error input");
    let total: u32 = input.trim().parse().expect("Not a number");
    let mut dict = std::collections::HashMap::<String, bool>::new();
    for _ in 0..total {
        input = String::new();
        std::io::stdin().read_line(&mut input).expect("Error input");
        let v: Vec<&str> = input.trim().split_whitespace().collect();
        let (query, key): (&str, &str) = (v[0], v[1]);
        match query {
            "insert" => {
                dict.insert(key.to_string(), true);
            }
            "find" => {
                println!(
                    "{}",
                    match dict.contains_key(key) {
                        true => "yes",
                        false => "no",
                    }
                );
            }
            &_ => panic!("ERROR"),
        };
    }
}
