fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        return a;
    }
    return gcd(b, a % b);
}

fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let v: Vec<u64> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!("{}", gcd(v[0], v[1]));
}
