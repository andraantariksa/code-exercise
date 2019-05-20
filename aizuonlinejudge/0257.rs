/*input
0 1 0
*/
macro_rules! read_line_vec {
    () => {
        read_line!()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect()
    };
    ($delimiter:expr) => {
        read_line!()
            .split($delimiter)
            .map(|x| x.parse().unwrap())
            .collect()
    };
}

macro_rules! read_line {
    () => {{
        let mut return_ = format!("");
        std::io::stdin().read_line(&mut return_).ok();
        return_.pop();
        return_
    }};
}

fn main() {
    let v: Vec<i32> = read_line_vec!();
    /*read_line!()
    .split_whitespace()
    .map(|x| x.parse().unwrap())
    .collect();*/
    if (v[0] == 1 && v[1] == 1 && v[2] == 0) || (v[0] == 0 && v[1] == 0 && v[2] == 1) {
        println!("Open");
    } else {
        println!("Close");
    }
}
