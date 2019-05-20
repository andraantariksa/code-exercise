/*input
5 7
1 99
1000 999
*/
fn main() {
    let mut input;
    let mut total: u64;
    loop {
        input = format!("");
        match std::io::stdin().read_line(&mut input) {
            Ok(0) => {
                break;
            }
            _ => {}
        }
        total = 0;
        for i in input.trim().split_whitespace() {
            total = total + i.parse::<u64>().expect("");
        }
        println!("{}", total.to_string().len());
    }
}
