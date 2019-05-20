/*input
5 14 80
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let v: Vec<u32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    let mut count: u32 = 0;
    for i in v[0]..v[1] + 1 {
        if v[2] % i == 0 {
            count = count + 1;
        }
    }
    println!("{}", count);
}
