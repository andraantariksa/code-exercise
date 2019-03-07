/*input
4 5 3
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
    let v: Vec<i64> = input_vec!();
    println!(
        "{} {}",
        v.iter()
            .fold(std::i64::MAX, |x, y| if x < *y { x } else { *y }),
        v.iter()
            .fold(std::i64::MIN, |x, y| if x > *y { x } else { *y })
    );
}
