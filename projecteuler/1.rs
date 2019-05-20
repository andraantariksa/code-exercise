/*input
1
100
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let n: u128 = read_line().trim().parse().unwrap();
    let mut m: u128;
    for _ in 0..n {
        m = read_line().trim().parse().unwrap();
        println!(
            "{}",
            (3 * ((m - 1) / 3) * (((m - 1) / 3) + 1) / 2)
                + (5 * ((m - 1) / 5) * (((m - 1) / 5) + 1) / 2)
                - (15 * ((m - 1) / 15) * (((m - 1) / 15) + 1) / 2)
        );
    }
}
