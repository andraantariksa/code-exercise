/*input
3
4 3 5
4 3 6
8 8 8
*/
fn main() {
    let mut input;
    input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let iter: u16 = input.trim().parse().expect("");
    let mut v: Vec<u32>;
    let mut max;
    for _ in 0..iter {
        input = format!("");
        std::io::stdin().read_line(&mut input).expect("");
        v = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        max = v
            .clone()
            .into_iter()
            .fold(None, |max, x| match max {
                None => Some(x),
                Some(y) => Some(if x > y { x } else { y }),
            })
            .unwrap();
        if v[0].pow(2) + v[1].pow(2) + v[2].pow(2) - max.pow(2) == max.pow(2) {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}
