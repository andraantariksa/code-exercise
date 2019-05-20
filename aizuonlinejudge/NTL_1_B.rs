/*input
2 3
*/
fn pow_ext(mut a: u64, mut b: u64) -> u64 {
    // MOD 1000000007
    let mut ret: u64 = 1;
    while b > 0 {
        if b % 2 == 1 {
            ret = ret * a % 1000000007;
        }
        a = a * a % 1000000007;
        b = b / 2;
    }
    ret
}

fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let v: Vec<u64> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!("{}", pow_ext(v[0], v[1]));
}
