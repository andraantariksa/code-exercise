/*input
3
1 2 3
2
2 4
*/
macro_rules! input_vec {
    () => {
        input!()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect()
    };
    ($delimiter:expr) => {
        input!()
            .split($delimiter)
            .map(|x| x.parse().unwrap())
            .collect()
    };
}

macro_rules! input {
    () => {{
        let mut return_ = format!("");
        std::io::stdin().read_line(&mut return_).ok();
        return_.pop();
        return_
    }};
}

fn main() {
    input!();
    let a: Vec<i32> = input_vec!();
    input!();
    let b: Vec<i32> = input_vec!();
    let min = if a.len() > b.len() { b.len() } else { a.len() };
    for i in 0..min {
        if b[i] > a[i] {
            println!("1");
            std::process::exit(0);
        } else if a[i] > b[i] {
            println!("0");
            std::process::exit(0);
        }
    }
    if b.len() > a.len() {
        println!("1");
    } else {
        println!("0");
    }
}
