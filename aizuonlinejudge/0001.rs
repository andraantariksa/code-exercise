/*input
100
200
300
400
500
600
700
800
900
900
*/
fn main() {
    let mut v: Vec<u16> = Vec::new();
    let mut input;
    for _ in 0..10 {
        input = format!("");
        std::io::stdin().read_line(&mut input).expect("");
        v.push(input.trim().parse().expect(""));
    }
    v.sort();
    v.reverse();
    for i in 0..3 {
        println!("{}", v[i]);
    }
}
