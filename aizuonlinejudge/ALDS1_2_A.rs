/*input
5
5 3 2 4 1
*/
fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let mut v: Vec<u8> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let mut temp: u8;
    let mut step: u16 = 0;
    let mut sorted: bool;
    let mut first: bool = true;
    loop {
        sorted = true;
        for i in 0..v.len() - 1 {
            if v[i] > v[i + 1] {
                sorted = false;
                temp = v[i + 1];
                v[i + 1] = v[i];
                v[i] = temp;
                step = step + 1;
            }
        }
        if sorted {
            break;
        }
    }
    println!(
        "{}",
        v.iter().fold(format!(""), |a, &b| a.to_string()
            + if !first {
                " "
            } else {
                first = false;
                ""
            }
            + &b.to_string())
    );
    println!("{}", step);
}
