/*input
106
0
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.trim().to_string()
}

fn main() {
    let mut s;
    let mut total: u32;
    loop {
        s = read_line();
        if s == format!("0") {
            break;
        }
        total = 0;
        for i in s.chars() {
            total = total + i.to_digit(10).unwrap();
        }
        println!("{}", total);
    }
}
