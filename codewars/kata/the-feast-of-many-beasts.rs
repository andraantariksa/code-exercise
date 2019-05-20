fn feast(beast: &str, dish: &str) -> bool {
    if beast[0..1] == dish[0..1]
        && beast[beast.len() - 1..beast.len()] == dish[dish.len() - 1..dish.len()]
    {
        true
    } else {
        false
    }
}
