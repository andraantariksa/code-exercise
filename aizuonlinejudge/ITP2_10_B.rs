/*input
8 10
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
    let n: Vec<u32> = input_vec!();
    print!(
        "{:032b}\n{:032b}\n{:032b}\n",
        n[0] & n[1],
        n[0] | n[1],
        n[0] ^ n[1]
    );
}
