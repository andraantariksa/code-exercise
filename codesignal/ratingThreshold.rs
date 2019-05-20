fn ratingThreshold(threshold: f64, ratings: Vec<Vec<i32>>) -> Vec<i32> {
    let mut need_to_rev = Vec::new();
    for (i, v) in ratings.iter().enumerate() {
        if (v.iter().sum::<i32>() as f64 / v.len() as f64) < threshold {
            need_to_rev.push(i as i32);
        }
    }
    need_to_rev
}
