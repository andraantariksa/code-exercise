fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.trim().to_string()
}

fn main() {
    println!("{:?}", read_line().split_whitespace().map(|x| x.parse::<i32>().unwrap()).fold(0, |x, y| x + y));
}