fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let inp = read_line().parse::<u64>().unwrap();
    let mut a = 2;
    while a <= inp {
        a = a << 1;
    }
    println!("{}", a >> 1);
}