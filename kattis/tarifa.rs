/*input
10
3
4
6
2
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
    let a: i32 = input!().parse().unwrap();
    let mut tot: i32 = a;
    for _ in 0..input!().parse().unwrap() {
        tot += a - input!().parse::<i32>().unwrap();
    }
    println!("{}", tot);
}
