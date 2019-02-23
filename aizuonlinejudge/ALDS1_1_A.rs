/*input
6
5 2 4 6 1 3
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    read_line();
    let mut v: Vec<i32> = read_line()
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let mut key: i32;
    let mut j: i32;
    let mut first: bool;
    for i in 0..v.len() {
        key = v[i as usize];
        j = i as i32 - 1;
        while j >= 0 && v[j as usize] > key {
            v[(j + 1) as usize] = v[j as usize];
            j = j - 1;
        }
        v[(j + 1) as usize] = key;
        first = true;
        for k in v.clone() {
            if !first {
                print!(" ");
            } else {
                first = false;
            }
            print!("{}", k);
        }
        print!("\n");
    }
}
