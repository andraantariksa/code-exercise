/*input
5
1 2 3 4 5
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    read_line();
    let mut v: Vec<u16> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    v.reverse();
    for i in 0..v.len() {
        print!("{}", v[i]);
        if i != v.len() - 1 {
            print!(" ");
        }
    }
    print!("\n");
}
