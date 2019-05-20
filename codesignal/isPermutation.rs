//CodeMaster competition

fn isPermutation(n: i32, inputArray: Vec<i32>) -> bool {
    for i in 1..=n {
        if inputArray.iter().any(|&x| x == i as i32) {
        } else {
            return false;
        }
    }
    true
}
