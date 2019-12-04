fn main() {
    let inputs = include_str!("1.in");
    let mut total: i32 = 0;
    for input in inputs.lines() {
        total += input.parse::<i32>().unwrap() / 3 - 2;
    }
    println!("{}", total);
}