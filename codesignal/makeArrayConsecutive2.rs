fn makeArrayConsecutive2(statues: Vec<i32>) -> i32 {
    (*statues.iter().max().unwrap() - *statues.iter().min().unwrap() + 1) - statues.len() as i32
}
