pub fn build_proverb(list: &[&str]) -> String {
    let verses = list.windows(2).map(|x|
        format!("For want of a {} the {} was lost.\n", x[0], x[1])
    ).collect::<String>();
    let closing = match list.len() {
        0 => String::from(""),
        _ => format!("And all for the want of a {}.", list[0])
    };
    format!("{}{}", verses, closing)
}
