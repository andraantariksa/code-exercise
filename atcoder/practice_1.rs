/*input
72
128 256
myonmyon
*/
fn main() {
    let mut input = format!("");
    let mut total: u16 = 0;
    std::io::stdin().read_line(&mut input).expect("");
    total = total + input.trim().parse::<u16>().expect("");
    input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    total = total
        + input
            .trim()
            .split_whitespace()
            .fold(0, |x, y| x + y.parse::<u16>().unwrap());
    input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    println!("{} {}", total, input.trim());
}
