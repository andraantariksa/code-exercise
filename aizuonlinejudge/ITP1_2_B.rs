fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let v: Vec<i32> = read_line()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    if v[0] < v[1] && v[1] < v[2] {
        println!("Yes");
    } else {
        println!("No");
    }
}
