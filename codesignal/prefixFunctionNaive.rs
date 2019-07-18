fn prefixFunctionNaive(s: String) -> Vec<i32> {
    let mut pref_t = vec![0i32; s.len()];
    for i in 1..s.len() {
        let mut j = pref_t[i as usize - 1];
        while j > 0 && s.chars().nth(i as usize) != s.chars().nth(j as usize) {
            j = pref_t[j as usize - 1];
        }
        if s.chars().nth(i as usize) == s.chars().nth(j as usize) {
            j += 1;
        }
        pref_t[i] = j;
    }
    pref_t
}
