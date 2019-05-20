/*input
3 4
5 6
3 3
2 2
1 1
0 0
*/
fn main() {
    let mut s: String;
    let mut v: Vec<u16>;
    loop {
        s = format!("");
        std::io::stdin().read_line(&mut s).expect("");
        v = s
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect(""))
            .collect();
        if v[0] == 0 || v[1] == 0 {
            break;
        }
        for i in 0..v[0] {
            for j in 0..v[1] {
                if j % 2 == 0 {
                    if i % 2 == 0 {
                        print!("#");
                    } else {
                        print!(".");
                    }
                } else {
                    if i % 2 == 0 {
                        print!(".");
                    } else {
                        print!("#");
                    }
                }
            }
            print!("\n");
        }
        print!("\n");
    }
}
