impl Solution {
    pub fn find_the_difference(s: String, t: String) -> char {
        let mut c: u8 = 0;
        for i in s.chars(){
            c = c ^ i as u8;
        }
        for i in t.chars(){
            c = c ^ i as u8;
        }
        c as char
    }
}
