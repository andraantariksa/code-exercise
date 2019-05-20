fn part_list(arr: Vec<&str>) -> String {
    let mut out = String::new();
    for i in 1..arr.len() {
        out.push('(');
        for (num, val) in arr.iter().enumerate() {
            if num == i {
                out.push_str(", ");
            }else if num != 0usize {
                out.push(' ');
            }
            out.push_str(val);
        }
        out.push(')');
    }
    out
}
