/*input
3 2
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let v: Vec<u32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!(
        "{} {} {:.5}",
        v[0] / v[1],
        v[0] % v[1],
        v[0] as f64 / v[1] as f64
    );
}
