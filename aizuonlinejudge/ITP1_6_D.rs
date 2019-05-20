fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Error input");
    let v = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse::<usize>().expect("Parse error"))
        .collect::<Vec<usize>>();
    let (n, m) = (v[0], v[1]);
    let mut matrix = vec![Vec::new(); n];
    for i in 0..n {
        input = String::new();
        std::io::stdin().read_line(&mut input).expect("Error input");
        matrix[i] = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse::<u32>().expect("Parse error"))
            .collect::<Vec<u32>>();
    }
    let mut matrix2 = Vec::new();
    for _ in 0..m {
        input = String::new();
        std::io::stdin().read_line(&mut input).expect("Error input");
        matrix2.push(input.trim().parse::<u32>().expect("Parse error"));
    }
    for i in 0..n {
        let mut row_val = 0;
        for j in 0..m {
            row_val += matrix[i][j] * matrix2[j];
        }
        println!("{}", row_val);
    }
}
