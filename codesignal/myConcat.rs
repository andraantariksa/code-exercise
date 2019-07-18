fn myConcat(strings: Vec<String>, separator: String) -> String {
    strings.join(&separator) + &separator
}
