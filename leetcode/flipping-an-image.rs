impl Solution {
    pub fn flip_and_invert_image(a: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let mut a = a.clone();
        a.iter()
            .map(|x| {
                x.clone()
                    .iter()
                    .map(|y| if y == &0 { 1i32 } else { 0i32 })
                    .rev()
                    .collect::<Vec<i32>>()
            })
            .collect::<Vec<Vec<i32>>>()
    }
}
