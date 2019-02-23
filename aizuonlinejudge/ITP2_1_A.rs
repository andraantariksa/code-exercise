/*input
8
0 1
0 2
0 3
2
0 4
1 0
1 1
1 2
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let q: u64 = read_line().trim().parse().expect("");
    let mut v: Vec<i64> = vec![];
    let mut v_q: Vec<i64>;
    for _ in 0..q {
        v_q = read_line()
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        if v_q[0] == 0 {
            v.push(v_q[1]);
        } else if v_q[0] == 1 {
            println!("{}", v[v_q[1] as usize]);
        } else if v_q[0] == 2 {
            v.pop();
        }
    }
}
