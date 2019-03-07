/*input
vanceknowledgetoad
advance
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let s = read_line();
    let f = read_line();
    let mut s_: String = String::new();
    s_.push_str(&s);
    s_.push_str(&s);
    println!(
        "{}",
        match s_.contains(&f) {
            true => "Yes",
            false => "No",
        }
    );
}
