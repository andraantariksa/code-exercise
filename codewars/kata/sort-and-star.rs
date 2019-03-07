fn two_sort(arr: &[&str]) -> String {
    arr.to_vec()
        .iter()
        .min()
        .unwrap()
        .chars()
        .map(|x| x.to_string())
        .collect::<Vec<String>>()
        .join("***")
}
