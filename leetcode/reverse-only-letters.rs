use std::collections::LinkedList;

impl Solution {
    pub fn reverse_only_letters(s: String) -> String {
        let mut character = LinkedList::new();
        let mut char_out = Vec::new();
        for i in s.chars() {
            if i.is_alphabetic() {
                character.push_back(i);
            }
        }
        for i in s.chars() {
            if i.is_alphabetic() {
                char_out.push(character.pop_back().unwrap());
            }else{
                char_out.push(i);
            }
        }
        char_out.iter().collect()
    }
}
