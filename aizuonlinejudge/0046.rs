// From https://www.reddit.com/r/rust/comments/3fg0xr/how_do_i_find_the_max_value_in_a_vecf64/ctoaxna?utm_source=share&utm_medium=web2x
use std::f64;

trait FloatIterExt {
    fn float_min(&mut self) -> f64;
    fn float_max(&mut self) -> f64;
}

impl<T> FloatIterExt for T
where
    T: Iterator<Item = f64>,
{
    fn float_max(&mut self) -> f64 {
        self.fold(f64::NAN, f64::max)
    }

    fn float_min(&mut self) -> f64 {
        self.fold(f64::NAN, f64::min)
    }
}

fn main() {
    let mut v: Vec<f64> = Vec::new();
    let mut input;
    loop {
        input = String::new();
        match std::io::stdin().read_line(&mut input) {
            Ok(0) => break,
            Err(_) => break,
            _ => {}
        };
        v.push(input.trim().parse::<f64>().expect("Parse error"));
    }
    println!(
        "{:.1}",
        v.iter().cloned().float_max() - v.iter().cloned().float_min()
    );
}
