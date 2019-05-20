fn descending_order(x: u64) -> u64 {
    let mut v = x.to_string().chars().collect::<Vec<char>>();
    v.sort();
    v.iter().rev().collect::<String>().parse::<u64>().unwrap()
}
