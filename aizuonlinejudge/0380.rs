/*input
68
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let n: u32 = read_line().trim().parse().expect("");
    println!("{:}", (n - 30) / 2);
}
