fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let q: Vec<u64> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().expect(""))
        .collect();
    let mut v: Vec<Vec<i64>> = vec![vec![]; q[0] as usize];
    let mut v_q: Vec<i64>;
    for _ in 0..q[1] {
        v_q = read_line()
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        if v_q[0] == 0 {
            v[v_q[1] as usize].push(v_q[2]);
        } else if v_q[0] == 1 {
            if v[v_q[1] as usize].len() > 0 {
                println!("{}", v[v_q[1] as usize][v[v_q[1] as usize].len() - 1]);
            }
        } else if v_q[0] == 2 {
            if v[v_q[1] as usize].len() > 0 {
                v[v_q[1] as usize].pop();
            }
        }
    }
}
