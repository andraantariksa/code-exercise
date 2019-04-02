fn reverse_words(str:&str) -> String {
    str.split(' ').rev().map(|x| x.to_string()).collect::<Vec<String>>().join(" ")
}
