/*input
4 3 90
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
    let v: Vec<f64> = input_vec!();
    print!(
        "{:.10}\n{:.10}\n{:.10}\n",
        v[0] * v[1] * v[2].to_radians().sin() / 2.0,
        v[0] + v[1]
            + ((v[0] * v[0]) + (v[1] * v[1]) - (2.0 * v[0] * v[1] * v[2].to_radians().cos()))
                .sqrt(),
        2.0 * (v[0] * v[1] * v[2].to_radians().sin() / 2.0) / v[0]
    );
}
