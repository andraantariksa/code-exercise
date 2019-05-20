/*input
46979
*/
fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).ok();
    let mut number: u32 = input.trim().parse().unwrap();
    let h: u32 = number / 3600;
    number = number % 3600;
    let m: u32 = number / 60;
    number = number % 60;
    let s: u32 = number;
    println!("{}:{}:{}", h, m, s);
}
