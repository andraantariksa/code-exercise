fn main() {
    let mut input;
    loop {
        input = String::new();
        std::io::stdin().read_line(&mut input).expect("Input error");
        let mut n = input.trim().parse::<u64>().expect("Error parse");
        if n == 0 {
            break;
        }
        let mut zero = 0;
        while n >= 5 {
            zero += n / 5;
            n = n / 5;
        }
        println!("{}", zero);
    }
}
