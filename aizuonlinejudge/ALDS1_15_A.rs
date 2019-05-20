fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Input error");
    let mut change = input.trim().parse::<u64>().expect("Parse error");
    let mut total_coin = 0;
    if change >= 25 {
        total_coin += change / 25;
        change = change % 25;
    }
    if change >= 10 {
        total_coin += change / 10;
        change = change % 10;
    }
    if change >= 5 {
        total_coin += change / 5;
        change = change % 5;
    }
    total_coin += change;
    println!("{}", total_coin);
}
