/*input
8
1 2 3 4 5 6 7 8
2
1 6
3 8
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    read_line();
    let mut v: Vec<i64> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let i: u16 = read_line().trim().parse().unwrap();
    for _ in 0..i {
        let v_: Vec<u16> = read_line()
            .trim()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        &v[(v_[0]) as usize..(v_[1]) as usize].reverse();
    }
    for i in 0..v.len() {
        print!("{}", v[i]);
        if i != v.len() - 1 {
            print!(" ");
        }
    }
    print!("\n");
}
