//https://oeis.org/A014445
fn even_fibbonaci(n: u128) -> u128 {
    let v: std::vec::Vec<u128> = vec![
        2,
        8,
        34,
        144,
        610,
        2584,
        10946,
        46368,
        196418,
        832040,
        3524578,
        14930352,
        63245986,
        267914296,
        1134903170,
        4807526976,
        20365011074,
        86267571272,
        365435296162,
        1548008755920,
        6557470319842,
        27777890035288,
        117669030460994,
        498454011879264,
        2111485077978050,
        8944394323791464,
        37889062373143906,
    ];
    if n <= 27 {
        return v[(n - 1) as usize];
    }
    if n == 0 {
        return 0;
    }
    4 * even_fibbonaci(n - 1) + if n == 1 { 2 } else { even_fibbonaci(n - 2) }
}

fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let range: u64 = input.trim().parse().unwrap();
    for _ in 0..range {
        let mut input = format!("");
        std::io::stdin().read_line(&mut input).expect("");
        let range2: u128 = input.trim().parse().unwrap();
        let mut res: u128;
        let mut total: u128 = 0;
        let mut iter: u128 = 1;
        loop {
            res = even_fibbonaci(iter);
            if res <= range2 {
                total = total + res;
                iter = iter + 1;
            } else {
                break;
            }
        }
        println!("{}", total);
    }
}
