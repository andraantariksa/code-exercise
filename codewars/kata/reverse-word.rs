fn reverse_words(str: &str) -> String {
    str.split(" ")
        .map(|x| x.chars().rev().collect::<String>())
        .collect::<Vec<String>>()
        .join(" ")
}
