fn firstNotRepeatingCharacter(s: String) -> char {
    let mut alph = [0u16; 26];
    for i in s.as_bytes() {
        alph[(i - 'a' as u8) as usize] += 1;
    }
    for i in s.chars() {
        if alph[i as usize - 'a' as usize] == 1 {
            return i;
        }
    }
    '_'
}
