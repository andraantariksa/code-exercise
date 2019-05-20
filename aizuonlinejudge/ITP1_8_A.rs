/*input
TesT
*/
use std::ascii::AsciiExt;

fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let s = read_line();
    let out = s
        .chars()
        .map(|mut x| match x {
            'a'...'z' => {
                x.make_ascii_uppercase();
                x
            }
            'A'...'Z' => {
                x.make_ascii_lowercase();
                x
            }
            _ => x,
        })
        .collect::<String>();
    println!("{}", out);
}
