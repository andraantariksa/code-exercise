/*input
1a 132 243
1c 324 183
1f 93 199
2b 372 163
2c 229 293
2e 391 206
3a 118 168
3b 263 293
3d 281 102
*/
macro_rules! input_vec {
    () => {
        input!().split_whitespace().map(|x| x.to_string()).collect()
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
    let mut v: Vec<String>;
    let (mut a, mut b): (i32, i32);
    for _ in 0..9 {
        v = input_vec!();
        a = v[1].parse().expect("");
        b = v[2].parse().expect("");
        println!("{} {} {}", v[0], a + b, a * 200 + b * 300);
    }
}
