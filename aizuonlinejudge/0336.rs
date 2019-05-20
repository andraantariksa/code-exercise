/*input
3 -3
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let v: Vec<i32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!(
        "{}",
        if v[1] + v[0] < 0 {
            -1
        } else if v[1] + v[0] > 0 {
            1
        } else {
            0
        }
    );
}
