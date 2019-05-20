/*input
30 19
39 20
19 18
25 20
22 21
23 10
10 -10
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut v: Vec<i32>;
    for _ in 0..7 {
        v = read_line()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        println!("{}", (v[0] - v[1]).abs());
    }
}
