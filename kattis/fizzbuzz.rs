/*input
2 3 7
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
    let v: Vec<u32> = input_vec!();
    for i in 1..v[2] + 1 {
        if i % v[0] == 0 && i % v[1] == 0 {
            println!("FizzBuzz");
        } else if i % v[0] == 0 {
            println!("Fizz");
        } else if i % v[1] == 0 {
            println!("Buzz");
        } else {
            println!("{}", i);
        }
    }
}
