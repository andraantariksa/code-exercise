fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let inp = std::char::from_u32(read_line().parse::<u32>().unwrap()).unwrap();
    if inp.is_lowercase() {
        println!("2");
    } else if inp.is_uppercase() {
        println!("1");
    } else {
        println!("0");
    }
}