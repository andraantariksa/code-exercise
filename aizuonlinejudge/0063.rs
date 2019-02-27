/*input
abcba
sx
abcddcba
rttrd
*/
fn main() {
    let mut s = format!("");
    let mut i: u16 = 0;
    loop {
        match std::io::stdin().read_line(&mut s) {
            Ok(x) => match x {
                0 => break,
                _ => {
                    s.pop();
                    match &s[0..s.len()] == &s[0..s.len()].chars().rev().collect::<String>() {
                        true => {
                            i = i + 1;
                        }
                        false => {}
                    }
                    s = format!("");
                }
            },
            Err(_) => {}
        }
    }
    println!("{}", i);
}
