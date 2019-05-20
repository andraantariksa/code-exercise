/*input
0 0 1 1
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
    let v: Vec<f64> = input_vec!();
    println!(
        "{:.8}",
        ((v[2] - v[0]).powf(2.0) + (v[3] - v[1]).powf(2.0)).sqrt()
    );
}
