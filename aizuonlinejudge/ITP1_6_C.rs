fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Input error");
    let mut room = vec![vec![0i32; 10]; 12];
    for _ in 0..input.trim().parse::<u32>().expect("Parse error") {
        input = String::new();
        std::io::stdin().read_line(&mut input).expect("Input error");
        let data = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse::<i32>().expect("Parse error"))
            .collect::<Vec<i32>>();
        room[(data[0] as usize - 1) * 3 + data[1] as usize - 1][data[2] as usize - 1] += data[3];
    }
    for i in 0..12 {
        println!(
            " {}",
            room[i]
                .iter()
                .map(|x| x.to_string())
                .collect::<Vec<String>>()
                .join(" ")
        );
        if (i + 1) % 3 == 0 && i != 0 && i != 11 {
            println!("####################");
        }
    }
}
