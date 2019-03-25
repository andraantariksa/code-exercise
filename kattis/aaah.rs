/*input
aaah
ah
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
    let a = input!().chars().filter(|x| x == &'a').count();
    let b = input!().chars().filter(|x| x == &'a').count();
    if a >= b {
        println!("go");
    } else {
        println!("no");
    }
}
