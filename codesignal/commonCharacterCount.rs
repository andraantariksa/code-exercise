fn commonCharacterCount(s1: String, s2: String) -> i32 {
    let mut alph1 = [0; 26];
    let mut alph2 = [0; 26];
    for c in s1.chars() {
        alph1[c as u8 as usize - 97] += 1;
    }
    for c in s2.chars() {
        alph2[c as u8 as usize - 97] += 1;
    }
    alph1.iter().zip(alph2.iter()).fold(0, |acc, (&x1, &x2)| acc + if !(x1 == 0 || x2 == 0) { if x1 > x2 { x2 } else { x1 } } else { 0 })
}
