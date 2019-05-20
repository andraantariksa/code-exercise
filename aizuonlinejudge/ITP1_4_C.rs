/*input
1 + 2
56 - 18
13 * 2
100 / 10
27 + 81
0 ? 0
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.trim().to_string()
}

fn main() {
    let mut v: Vec<String>;
    let mut val: i32;
    loop {
        v = read_line()
            .trim()
            .split_whitespace()
            .map(|x| x.to_string())
            .collect();
        match v[1].chars().next().unwrap() {
            '+' => {
                val = v[0].parse::<i32>().unwrap() + v[2].parse::<i32>().unwrap();
            }
            '-' => {
                val = v[0].parse::<i32>().unwrap() - v[2].parse::<i32>().unwrap();
            }
            '*' => {
                val = v[0].parse::<i32>().unwrap() * v[2].parse::<i32>().unwrap();
            }
            '/' => {
                val = v[0].parse::<i32>().unwrap() / v[2].parse::<i32>().unwrap();
            }
            _ => {
                break;
            }
        }
        println!("{}", val);
    }
}
