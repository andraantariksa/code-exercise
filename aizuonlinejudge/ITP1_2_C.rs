/*input
3 2 1
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let mut v: Vec<u32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    v.sort();
    println!("{} {} {}", v[0], v[1], v[2]);
}
