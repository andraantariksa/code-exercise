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
    let v: Vec<i32> = input_vec!();
    println!(
        "{}",
        if v[0] + v[1] * 5 + v[2] * 10 + v[3] * 50 + v[4] * 100 + v[5] * 500 >= 1000 {
            1
        } else {
            0
        }
    );
}
