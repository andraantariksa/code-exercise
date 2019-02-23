/*input
1 2
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let v: Vec<i16> = read_line()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    if v[0] == v[1] {
        println!("a == b");
    } else if v[0] < v[1] {
        println!("a < b");
    } else if v[0] > v[1] {
        println!("a > b");
    }
}
