/*input
30 20
10 10
10 20
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
    let mut m_l: std::collections::HashMap<i32, i8> = std::collections::HashMap::new();
    let mut m_r: std::collections::HashMap<i32, i8> = std::collections::HashMap::new();
    let mut v: Vec<i32>;
    for _ in 0..3 {
        v = input_vec!();
        *m_l.entry(v[0]).or_insert(0) += 1;
        *m_r.entry(v[1]).or_insert(0) += 1;
    }
    println!(
        "{} {}",
        m_l.iter()
            .fold(0i32, |x, y| if y.1 == &1 { *y.0 } else { x }),
        m_r.iter()
            .fold(0i32, |x, y| if y.1 == &1 { *y.0 } else { x })
    );
}
