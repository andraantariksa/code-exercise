// Definition for singly-linked list.
// #[derive(PartialEq, Eq, Clone, Debug)]
// pub struct ListNode {
//   pub val: i32,
//   pub next: Option<Box<ListNode>>
// }
// 
// impl ListNode {
//   #[inline]
//   fn new(val: i32) -> Self {
//     ListNode {
//       next: None,
//       val
//     }
//   }
// }
impl Solution {
    pub fn get_decimal_value(mut head: Option<Box<ListNode>>) -> i32 {
        let mut acc: Vec<i32> = Vec::new();
        while head != None {
            let next = head.unwrap();
            acc.push(next.val);
            head = next.next;
        }
        acc.iter().rev().zip(0..acc.len() as i32).fold(0, |acc, val| {
            acc + *val.0 * 2i32.pow(val.1 as u32) 
        })
    }
}