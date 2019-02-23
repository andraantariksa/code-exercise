/*input
300
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let mut input: u32 = read_line().trim().parse().expect("");
    input = input / 100;
    let mut s = format!("ai1333");
    for _ in 0..input {
        s.push('3');
    }
    println!("{}", s);
}
