/*input
Yes I have a number
How I wish I could calculate an unused color for space
Thank you
END OF INPUT
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.trim().to_string()
}

fn main() {
    let mut s: String;
    loop {
        s = read_line();
        if s == "END OF INPUT" {
            break;
        } else {
            for i in s.split(' ') {
                print!("{}", i.len());
            }
            print!("\n");
        }
    }
}
