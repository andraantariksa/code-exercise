/*input
10 60
20 7 10 8 10 27 2 3 10 5
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
        let mut return_ = String::new();
        std::io::stdin().read_line(&mut return_).ok();
        return_.pop();
        return_
    }};
}

fn main() {
    let a: Vec<i32> = input_vec!();
    let b: Vec<i32> = input_vec!();
    let mut tot = 0;
    let mut c = 0;
    for i in 0..a[0] {
        tot += b[i as usize];
        if tot > a[1] {
            break;
        }
        c += 1;
    }
    println!("{}", c);
}
