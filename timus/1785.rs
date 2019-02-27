/*input
40
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let n: u32 = read_line().trim().parse().expect("");
    println!(
        "{}",
        if n < 5 {
            "few"
        } else if n < 10 {
            "several"
        } else if n < 20 {
            "pack"
        } else if n < 50 {
            "lots"
        } else if n < 100 {
            "horde"
        } else if n < 250 {
            "throng"
        } else if n < 500 {
            "swarm"
        } else if n < 1000 {
            "zounds"
        } else {
            "legion"
        }
    );
}
