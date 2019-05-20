/*input
8 6
50000000 30000000
*/
fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        return a;
    }
    return gcd(b, a % b);
}

fn lcm(a: u64, b: u64) -> u64 {
    return a * b / gcd(a, b);
}

fn main() {
    let mut input;
    let mut v: Vec<u64>;
    loop {
        input = format!("");
        match std::io::stdin().read_line(&mut input) {
            Ok(0) => {
                break;
            }
            _ => {}
        }
        v = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        println!("{} {}", gcd(v[0], v[1]), lcm(v[0], v[1]));
    }
}
