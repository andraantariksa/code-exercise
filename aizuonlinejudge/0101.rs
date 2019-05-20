/*input
3
Hoshino
Hashino
Masayuki Hoshino was the grandson of Ieyasu Tokugawa.
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let n: u32 = read_line().trim().parse().expect("");
    for _ in 0..n {
        print!("{}", read_line().replace("Hoshino", "Hoshina"));
    }
}
