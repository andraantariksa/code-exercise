/*input
7
Bo
Pat
Jean
Kevin
Claude
William
Marybeth
6
Jim
Ben
Zoe
Joey
Frederick
Annabelle
5
John
Bill
Fran
Stan
Cece
0
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let mut i;
    let mut k = 1;
    let mut v: Vec<String> = Vec::new();
    loop {
        i = read_line().parse::<i32>().unwrap();
        if i == 0 {
            break;
        }
        println!("SET {}", k);
        for _ in 0..i {
            v.push(read_line());
        }
        for j in (0..i).filter(|x| x % 2 == 0) {
            println!("{}", v[j as usize]);
        }
        for j in (0..i).filter(|x| x % 2 != 0).rev() {
            println!("{}", v[j as usize]);
        }
        //println!("{:?}", v);
        v.clear();
        k += 1;
    }
}
