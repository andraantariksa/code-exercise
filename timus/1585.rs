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
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).unwrap();
    return_.trim().to_string()
    }};
}

fn main(){
    let a = input!().parse().expect("");
    let mut b;
    let mut c = [0, 0, 0];
    for i in 0..a{
        b = input!();
        if &b[..] == "Emperor Penguin"{
            c[0] += 1;
        }else if &b[..] == "Macaroni Penguin"{
            c[1] += 1;
        }else if &b[..] == "Little Penguin"{
            c[2] += 1;
        }
    }
    let mut max;
    if c[0] > c[1] && c[0] > c[2] {
        max = "Emperor Penguin";
    }else if c[1] > c[0] && c[1] > c[2] {
        max = "Macaroni Penguin";
    }else{
        max = "Little Penguin";
    }
    println!("{}", max);
}
