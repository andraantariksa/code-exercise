/*input
5 4 2 2 1
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    // w, h, x, y, r
    let v: Vec<i32> = read_line()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    if v[4] <= v[2] && v[2] <= v[0] - v[4] && v[4] <= v[3] && v[3] <= v[1] - v[4] {
        println!("Yes");
    } else {
        println!("No");
    }
}
