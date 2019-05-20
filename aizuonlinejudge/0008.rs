fn main() {
    let mut input;
    loop {
        input = String::new();
        match std::io::stdin().read_line(&mut input) {
            Ok(0) => break,
            Err(_) => break,
            Ok(_) => {}
        };
        let n = input.trim().parse::<u32>().expect("Error parse");
        let mut count = 0;
        for i in 0..10 {
            for j in 0..10 {
                for k in 0..10 {
                    for l in 0..10 {
                        if i + j + k + l == n {
                            count += 1;
                        }
                    }
                }
            }
        }
        println!("{}", count);
    }
}
