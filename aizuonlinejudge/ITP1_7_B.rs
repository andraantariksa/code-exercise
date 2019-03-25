/*input
5 9
0 0
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
    let mut v: Vec<i32>;
    let mut tot;
    loop {
        tot = 0;
        v = input_vec!();
        if v[0] == 0 && v[1] == 0 {
            break;
        }
        for i in 1..v[0] - 1 {
            for j in i + 1..v[0] {
                for k in j + 1..v[0] + 1 {
                    if i + j + k == v[1] {
                        tot += 1;
                    }
                }
            }
        }
        println!("{}", tot);
    }
}
