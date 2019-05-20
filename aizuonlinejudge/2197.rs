/*input
9
500
0
*/

fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut n;
    let mut tot;
    let mut tot_num;
    loop {
        n = read_line().parse().unwrap();
        if n == 0 {
            break;
        }
        tot_num = 0;

        for i in 1..(n / 2) + 1 {
            tot = 0;
            for j in i..n {
                tot = tot + j;
                if tot == n {
                    tot_num = tot_num + 1;
                    break;
                } else if tot > n {
                    break;
                }
            }
        }
        println!("{}", tot_num);
    }
}
