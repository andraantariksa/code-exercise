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
        std::io::stdin().read_line(&mut return_).unwrap();
        return_.pop();
        return_
    }};
}

fn main() {
    let v: Vec<i32> = input_vec!();
    println!("{} {}", v[1]-1, v[0]-1);
}
