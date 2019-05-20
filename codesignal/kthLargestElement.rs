fn kthLargestElement(mut nums: Vec<i32>, k: i32) -> i32 {
    nums.sort();
    *nums.iter().rev().nth(k as usize - 1).unwrap()
}
