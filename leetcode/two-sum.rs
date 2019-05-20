impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut hmap = std::collections::HashMap::<i32, usize>::new();
        for (k, v) in nums.iter().enumerate() {
            if hmap.contains_key(v) {
                return vec![hmap[v] as i32, k as i32];
            }
            hmap.insert(target - v, k);
        }
        vec![]
    }
}
