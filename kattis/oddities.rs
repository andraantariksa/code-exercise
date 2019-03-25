/*input
3
10
9
-5
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
    let mut z: i32;
    for _ in 0..input!().parse().unwrap() {
        z = input!().parse().unwrap();
        if z % 2 == 0 {
            println!("{} is even", z);
        } else {
            println!("{} is odd", z);
        }
    }
}
