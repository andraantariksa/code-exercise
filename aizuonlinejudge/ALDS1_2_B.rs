/*input
6
5 2 4 6 1 3
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    read_line();
    let mut v: Vec<u16> = read_line()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let mut step: u16 = 0;
    let mut min: u16;
    let mut index: usize = 0;
    let mut change: bool;
    //let mut temp: u16;
    for i in 0..v.len() - 1 {
        change = false;
        min = std::u16::MAX;
        for j in i..v.len() {
            if v[j] < min {
                change = true;
                min = v[j];
                index = j;
            }
        }
        if change && index != i {
            step = step + 1;
            //temp = v[i];
            //v[i] = v[index];
            //v[index] = temp;
            v[i] = v[i] + v[index];
            v[index] = v[i] - v[index];
            v[i] = v[i] - v[index];
        }
    }
    let mut first = true;
    for i in v {
        if first {
            first = false;
        } else {
            print!(" ");
        }
        print!("{}", i);
    }
    print!("\n");
    println!("{}", step);
}
