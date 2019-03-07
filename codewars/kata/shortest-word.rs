fn find_short(s: &str) -> usize {
    s.split_whitespace().fold(
        std::usize::MAX,
        |x, y| if y.len() < x { y.len() } else { x },
    )
}
