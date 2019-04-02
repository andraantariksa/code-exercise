fn count_positives_sum_negatives(input: Vec<i32>) -> Vec<i32> {
    let pos: i32 = input.iter().filter(|x| x > &&0).count() as i32;
    let neg: i32 = input.iter().filter(|x| x < &&0).sum::<i32>();
    if pos == 0 && neg == 0 {
        vec![]
    }else{
        vec![pos, neg]
    }
}
