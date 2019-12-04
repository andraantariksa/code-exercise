fn main() {
    let input = include_str!("2.in");
    let mut v = input.split(",").map(|string_number| string_number
            .parse::<i32>().unwrap()).collect::<Vec<i32>>();
    let mut i = 0;

    v[1] = 12;
    v[2] = 2;

    loop {
        if v[i] == 99 {
            break;
        }

        let i_change = v[i + 3] as usize;
        if v[i] == 1 {
            v[i_change] = v[v[i + 1] as usize] + v[v[i + 2] as usize];
        } else if v[i] == 2 {
            v[i_change] = v[v[i + 1] as usize] * v[v[i + 2] as usize];
        }
        i += 4;
    }
    println!("{}", v[0]);
}