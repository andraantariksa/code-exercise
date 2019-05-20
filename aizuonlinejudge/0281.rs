/*input
4
3 0 0
1 1 1
9 4 1
0 1 2
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut v: Vec<u32>;
    let mut tot_team: u32;
    for _ in 0..read_line().parse::<usize>().unwrap() {
        tot_team = 0;
        v = read_line()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();
        while v[2] > 0 && v[1] > 0 && v[0] > 0 {
            v[2] = v[2] - 1;
            v[1] = v[1] - 1;
            v[0] = v[0] - 1;
            tot_team = tot_team + 1;
        }
        while v[1] > 0 && v[0] > 1 {
            v[0] = v[0] - 2;
            v[1] = v[1] - 1;
            tot_team = tot_team + 1;
        }
        while v[0] > 2 {
            v[0] = v[0] - 3;
            tot_team = tot_team + 1;
        }
        println!("{}", tot_team);
    }
}
