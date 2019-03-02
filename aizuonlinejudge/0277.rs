/*input
3 10
1 4
4 1
2 5
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let ticket: [i32; 4] = [6000, 4000, 3000, 2000];
    let mut v: Vec<i32>;
    for _ in 0..4 {
        v = read_line()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        println!("{}", ticket[(v[0] - 1) as usize] * v[1]);
    }
}
