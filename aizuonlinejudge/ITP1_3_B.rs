fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut n: i32;
    let mut i = 1;
    loop {
        n = read_line().parse().unwrap();
        if n == 0 {
            break;
        }
        println!("Case {}: {}", i, n);
        i = i + 1;
    }
}
