impl Solution {
    pub fn intersect(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
        let mut ret = Vec::new();
        let mut skip = Vec::new();
        for (i, i_v) in nums1.iter().enumerate() {
            for (j, j_v) in nums2.iter().enumerate() {
                if i_v == j_v && !skip.contains(&j) {
                    ret.push(i_v.clone());
                    skip.push(j);
                    break;
                }
            }
        }
        ret
    }
}
