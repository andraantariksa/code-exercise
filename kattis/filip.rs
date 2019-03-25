/*input
734 893
*/
macro_rules! input_vec {
    () => {
        input!()
            .split_whitespace()
            .map(|x| x.parse::<i32>().unwrap())
            .collect::<Vec<i32>>()
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
    let v: Vec<i32> = input_vec!()
        .iter()
        .map(|x| {
            x.to_string()
                .chars()
                .rev()
                .collect::<String>()
                .parse()
                .unwrap()
        })
        .collect::<Vec<i32>>();
    if v[0] > v[1] {
        println!("{}", v[0]);
    } else {
        println!("{}", v[1]);
    }
}
