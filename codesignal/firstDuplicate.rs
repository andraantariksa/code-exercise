fn firstDuplicate(a: Vec<i32>) -> i32 {
    let mut set = std::collections::HashSet::new();
    for i in a.iter() {
        if set.contains(i) {
            return *i;
        }
        set.insert(i);
    }
    -1
}
