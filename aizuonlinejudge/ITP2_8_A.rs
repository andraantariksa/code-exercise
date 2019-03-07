/*input
7
0 blue 4
0 red 1
0 white 5
1 red
1 blue
0 black 8
1 black
*/
macro_rules! input_vec {
    () => {
        input!().split_whitespace().map(|x| x.to_string()).collect()
    };
    ($delimiter:expr) => {
        input!().split($delimiter).map(|x| x.to_string()).collect()
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
    let n: i32 = input!().parse().unwrap();
    let mut map: std::collections::HashMap<String, String> = std::collections::HashMap::new();
    let mut v: Vec<String>;
    for _ in 0..n {
        v = input_vec!();
        if v[0] == String::from("0") {
            map.insert(v[1].clone(), v[2].clone());
        } else {
            println!("{}", map[&v[1]]);
        }
    }
}
