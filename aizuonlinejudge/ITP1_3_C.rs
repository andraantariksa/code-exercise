fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let mut v: Vec<u32>;
    loop {
        v = read_line()
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        v.sort();
        if v[1] == 0 && v[0] == 0 {
            break;
        }
        println!("{} {}", v[0], v[1]);
    }
}
