/*input
5
10 1 5 4 17
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    read_line();
    let v: Vec<i64> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!(
        "{} {} {}",
        v.iter().min().unwrap(),
        v.iter().max().unwrap(),
        v.iter().fold(0, |x, y| x + y)
    );
}
