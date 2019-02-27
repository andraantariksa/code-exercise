/*input
16
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
*/
use std::io::BufRead;

fn main() {
    let stdin = std::io::stdin();
    let mut lines = stdin.lock().lines().map(|l| l.unwrap());
    let n = lines.next().unwrap().parse().unwrap();
    let m = lines.take(n).map(|i| i.parse::<u32>().unwrap());
    println!(
        "{}",
        m.filter(|&i| if i == 2 {
            true
        } else if i % 2 == 0 {
            false
        } else {
            for j in 3..(i as f64).sqrt().floor() as u32 + 1 {
                if i % j == 0 {
                    return false;
                }
            }
            true
        })
        .count()
    );
}
