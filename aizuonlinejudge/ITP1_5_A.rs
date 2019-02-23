/*input
30
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.trim().to_string()
}

fn main() {
    let v: u32 = read_line().parse().unwrap();
    for i in 1..v + 1 {
        if i % 3 == 0
            || match i.to_string().find('3') {
                Some(_) => true,
                None => false,
            }
        {
            print!(" {}", i);
        }
    }
    print!("\n");
}
