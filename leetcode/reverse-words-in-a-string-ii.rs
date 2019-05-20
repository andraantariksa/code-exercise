impl Solution {
    pub fn reverse_words(s: String) -> String {
        let mut v: Vec<String> = vec![];
        for i in s.split(' ') {
            v.push(i.chars().rev().collect::<String>());
        }
        v.join(" ")
    }
}
