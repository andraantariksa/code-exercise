/*input
this is a pen.
*/
fn main() {
    let mut s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    s.pop();
    println!("{}", s.to_uppercase());
}
