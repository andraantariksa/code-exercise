/*input
6
4
7
9
0
0
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut x: f64;
    let mut h: f64;
    loop {
        x = read_line().parse().unwrap();
        h = read_line().parse().unwrap();
        if x == 0f64 && h == 0f64 {
            break;
        } else {
            println!(
                "{:.6}",
                x * x + 2.0 * x * (h * h + (x / 2.0) * (x / 2.0)).sqrt()
            );
        }
    }
}

//184.192455
