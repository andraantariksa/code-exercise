/*input
100 80 70 60
80 70 60 100
*/
fn main() {
    let mut s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    let v: Vec<u16> = s
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    let v2: Vec<u16> = s
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!(
        "{}",
        if v.iter().sum::<u16>() >= v2.iter().sum::<u16>() {
            v.iter().sum::<u16>()
        } else {
            v2.iter().sum::<u16>()
        }
    );
}
