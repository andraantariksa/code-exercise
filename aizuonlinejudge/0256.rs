/*input
1
2
3
4
5
6
7
8
9
10
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut total = 0;
    for _ in 0..10 {
        total = total + read_line().parse::<i32>().unwrap();
    }
    println!("{}", total);
}
