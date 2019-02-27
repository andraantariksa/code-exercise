fn main() {
    let mut read = format!("");
    std::io::stdin().read_line(&mut read).expect("");
    let mut s = read.clone();
    s = s.trim().to_string();
    read = format!("");
    std::io::stdin().read_line(&mut read).expect("");
    let f = read.trim();
    if f.len() > s.len() {
        std::process::exit(0);
    }
    for i in 0..(s.len() - f.len() + 1) {
        if &s[i..i + f.len()] == f {
            println!("{}", i);
        }
    }
}
