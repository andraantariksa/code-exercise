/*input
2
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let r: f64 = read_line().trim().parse().unwrap();
    println!(
        "{:.5} {:.5}",
        r * r * std::f64::consts::PI,
        r * 2.0 * std::f64::consts::PI
    );
}
