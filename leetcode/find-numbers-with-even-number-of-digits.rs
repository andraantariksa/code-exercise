impl Solution {
    pub fn find_numbers(nums: Vec<i32>) -> i32 {
        fn digits(mut num: i32) -> i32 {
            let mut total: i32 = 0;
            while (num > 0) {
                num /= 10;
                total += 1;
            }
            total
        }
        
        nums.iter().fold(0, |acc, &val| acc + if digits(val) % 2 == 0 {
            1
        } else {
            0
        })
    }
}