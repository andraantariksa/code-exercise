/*input
50 30 -1
30 50 -1
40 40 -1
35 50 -1
20 50 -1
30 40 -1
25 35 -1
35 25 -1
30 35 -1
35 30 -1
25 40 -1
30 49 -1
29 50 -1
50 29 -1
25 25 -1
26 24 -1
50 0 -1
0 50 -1
49 1 -1
1 49 -1
2 49 -1
32 32 -1
50 14 -1
15 15 50
15 15 100
15 15 80
15 15 65
29 29 100
29 29 80
29 29 65
15 15 50
15 15 49
15 15 0
15 15 -1
29 0 -1
29 0 40
29 0 29
-1 50 -1
50 -1 -1
0 0 -1
1 1 -1
15 14 -1
14 15 -1
29 0 -1
0 29 -1
-1 -1 -1
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
    let (mut t1, mut t2);
    loop {
        v = input_vec!();
        if v[0] == -1 && v[1] == -1 {
            break;
        } else if v[0] == -1 || v[1] == -1 {
            println!("F");
            continue;
        }
        t1 = if v[0] != -1 { v[0] } else { 0 };
        t2 = if v[1] != -1 { v[1] } else { 0 };
        if t1 + t2 >= 80 {
            println!("A");
        } else if t1 + t2 >= 65 {
            println!("B");
        } else if t1 + t2 >= 50 {
            println!("C");
        } else if t1 + t2 >= 30 {
            if v[2] >= 50 {
                println!("C");
            } else {
                println!("D");
            }
        } else if t1 + t2 >= 0 {
            println!("F");
        }
    }
}
