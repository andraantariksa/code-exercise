impl Solution {
    pub fn remove_outer_parentheses(s: String) -> String {
        let mut par = 0;
        let mut out = String::new();
        for c in s.chars() {
            if c == '(' {
                if par != 0 {
                    out.push('(');
                }
                par += 1;
            } else if c == ')' {
                if par != 1 {
                    out.push(')');
                }
                par -= 1;
            }
        }
        out
    }
}
