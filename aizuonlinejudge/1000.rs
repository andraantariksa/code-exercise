/*input
1 2
10 5
100 20
*/
fn main() {
    let mut input: String;
    loop {
        input = format!("");
        match std::io::stdin().read_line(&mut input) {
            Ok(0) => {
                break;
            }
            Ok(_) => {
                println!(
                    "{}",
                    input
                        .trim()
                        .split_whitespace()
                        .fold(0, |x, y| x + y.parse::<i32>().unwrap())
                );
            }
            Err(_) => {}
        };
    }
}
