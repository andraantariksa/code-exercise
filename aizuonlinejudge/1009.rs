/*input
57 38
60 84
*/
fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        return a;
    }
    return gcd(b, a % b);
}

fn main() {
    let mut v: Vec<u64>;
    let mut input: String;
    loop {
        input = format!("");
        match std::io::stdin().read_line(&mut input) {
            Ok(0) => {
                break;
            }
            Ok(_) => {
                v = input
                    .trim()
                    .split_whitespace()
                    .map(|x| x.parse().expect(""))
                    .collect();
                println!("{}", gcd(v[0], v[1]));
            }
            Err(_) => {}
        };
    }
}
