fn abbrev_name(name: &str) -> String {
    name.split_whitespace()
        .map(|x| x.to_uppercase().chars().take(1).collect::<String>())
        .collect::<Vec<String>>()
        .join(".")
}
