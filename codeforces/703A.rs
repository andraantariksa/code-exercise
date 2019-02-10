/*input
2
6 1
1 6
*/
fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let number: i8 = input.trim().parse::<i8>().expect("");
    let mut mishka: u8 = 0;
    let mut chris: u8 = 0;
    for _ in 0..number {
        let mut input = format!("");
        std::io::stdin().read_line(&mut input).expect("");
        let v: Vec<i8> = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        if v[0] > v[1] {
            mishka = mishka + 1;
        } else if v[1] > v[0] {
            chris = chris + 1;
        }
    }
    if mishka > chris {
        println!("Mishka");
    } else if chris > mishka {
        println!("Chris");
    } else {
        println!("Friendship is magic!^^");
    }
}
