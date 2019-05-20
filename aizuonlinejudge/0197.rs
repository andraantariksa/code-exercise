/*input
1071 1029
5 5
0 0
*/
fn gcd(a: u64, b: u64, c: u64) -> Vec<u64> {
    if b == 0 {
        return vec![a, c];
    }
    return gcd(b, a % b, c + 1);
}

fn main() {
    let mut input;
    let mut v: Vec<u64>;
    loop {
        input = format!("");
        std::io::stdin().read_line(&mut input).expect("");
        v = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        if v[0] == 0 && v[1] == 0 {
            break;
        }
        let gcd_ = if v[0] > v[1] {
            gcd(v[0], v[1], 0)
        } else {
            gcd(v[1], v[0], 0)
        };
        println!("{} {}", gcd_[0], gcd_[1]);
    }
}
