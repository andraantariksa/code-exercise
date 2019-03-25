impl Solution {
    pub fn find_restaurant(list1: Vec<String>, list2: Vec<String>) -> Vec<String> {
        let mut uni: std::collections::HashMap<String, (usize, usize)> =
            std::collections::HashMap::new();
        for (i, i_) in list1.iter().enumerate() {
            for (j, j_) in list2.iter().enumerate() {
                if i_ == j_ {
                    uni.insert(j_.clone(), (i, j));
                }
            }
        }
        let mut min = std::usize::MAX;
        let mut name = Vec::new();
        for (k, v) in uni.iter() {
            if v.0 + v.1 < min {
                min = v.0 + v.1;
            }
        }
        for (k, v) in uni.iter() {
            if v.0 + v.1 == min {
                name.push(k.to_string());
            }
        }
        name
    }
}
