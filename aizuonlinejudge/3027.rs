/*input
100
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let input: u64 = read_line().trim().parse().expect("");
    let mut two_power: u64 = 1;
    while (two_power << 1) + 1 <= input {
        two_power = (two_power << 1) + 1;
    }
    println!("{}", two_power.count_ones());
}
