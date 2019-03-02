/*input
40
*/
//Attemp to use fast doubling fibbonaci
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn fibonacci(n: u64) -> (u64, u64) {
    if n == 0 {
        (0, 1)
    } else {
        let (a, b): (u64, u64) = fibonacci(n / 2);
        let c: u64 = a * (b * 2 - a);
        let d: u64 = a * a + b * b;
        if n % 2 == 0 {
            (c, d)
        } else {
            (d, c + d)
        }
    }
}

fn main() {
    let n: u64 = read_line().parse().unwrap();
    println!("{}", fibonacci(n + 1).0);
}
