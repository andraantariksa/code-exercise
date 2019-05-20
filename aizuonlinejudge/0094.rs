/*input
100 100
*/
fn main() {
    let mut s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    let v: Vec<f64> = s
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    println!("{:.8}", v[0] * v[1] / 3.305785f64);
}
