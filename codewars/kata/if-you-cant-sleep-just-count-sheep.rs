fn countSheep(n: u32) -> String {
    (1..n + 1)
        .map(|x| format!("{} sheep...", x))
        .collect::<String>()
}
