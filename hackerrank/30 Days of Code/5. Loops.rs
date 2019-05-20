/*input
2
*/
fn main() {
    let mut input: String = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let n: u8 = input.trim().parse::<u8>().unwrap();
    for i in 1..11 {
        println!("{} x {} = {}", n, i, n * i);
    }
}
