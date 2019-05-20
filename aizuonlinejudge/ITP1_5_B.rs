/*input
3 4
5 6
3 3
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
            if i == 0 || i == v[0] - 1 {
                for _ in 0..v[1] {
                    print!("#");
                }
            } else {
                print!("#");
                for _ in 1..v[1] - 1 {
                    print!(".");
                }
                print!("#");
            }
            print!("\n");
        }
        print!("\n");
    }
}
