use std::collections::*;
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
        std::io::stdin().read_line(&mut return_).unwrap();
        return_.trim();
        return_
    }};
}

fn main(){
    let a = input!().parse().expect("");
    let b: i32 = if a < 2{
        (a..2).sum()
    }else{
        (1..a+1).sum()
    };
    println!("{}", b);
}
