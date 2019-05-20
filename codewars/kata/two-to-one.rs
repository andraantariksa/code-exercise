fn longest(a1: &str, a2: &str) -> String {
    let mut a2 = a2.bytes().collect::<Vec<_>>();
    a2.append(&mut a1.bytes().collect::<Vec<_>>());
    a2.sort();
    a2.dedup();
    String::from_utf8(a2).unwrap()
}
