
fn sortByHeight(a: Vec<i32>) -> Vec<i32> {
    let mut a2 = a.clone().into_iter().filter(|&x| x != -1).collect::<Vec<i32>>();
    a2.sort();
    for (i, v) in a.iter().enumerate() {
        if *v == -1 {
            a2.insert(i, -1);
        }
    }
    a2
}
