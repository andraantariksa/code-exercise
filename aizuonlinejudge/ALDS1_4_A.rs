/*input
5
1 1 2 2 3
2
1 2
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let n: u32 = read_line().trim().parse().expect("");
    let arr: Vec<u32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let n_q: u32 = read_line().trim().parse().expect("");
    let arr_s: Vec<u32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let mut total: u32 = 0;
    for i in 0..n_q {
        for j in 0..n {
            if arr[j as usize] == arr_s[i as usize] {
                total = total + 1;
                break;
            }
        }
    }
    println!("{}", total);
}
