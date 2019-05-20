/*input
1
44033055505550666011011111090666077705550301110
*/
/*
44033055505550666011011111090666077705550301110
000555555550000330000444000080000200004440000
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_.pop();
    return_
}

fn main() {
    let phone = [
        vec!['.', ',', '!', '?', ' '],
        vec!['a', 'b', 'c'],
        vec!['d', 'e', 'f'],
        vec!['g', 'h', 'i'],
        vec!['j', 'k', 'l'],
        vec!['m', 'n', 'o'],
        vec!['p', 'q', 'r', 's'],
        vec!['t', 'u', 'v'],
        vec!['w', 'x', 'y', 'z'],
    ];
    let mut pos;
    let mut num;
    let mut s;
    let mut chars;
    for _ in 0..read_line().parse().unwrap() {
        chars = read_line()
            .replace("00", "0")
            .replace("00", "0")
            .chars()
            .collect::<Vec<char>>();
        pos = 0;
        num = chars[0];
        s = format!("");
        for i in 1..chars.len() {
            if chars[i] == num {
                pos = pos + 1;
            } else {
                if num == '0' {
                    pos = 0;
                    num = chars[i];
                } else {
                    s.push(
                        phone[(num.to_digit(10).unwrap() - 1) as usize][(pos
                            % phone[(num.to_digit(10).unwrap() - 1) as usize].len())
                            as usize],
                    );
                    pos = 0;
                    num = chars[i];
                }
            }
        }
        println!("{}", s);
    }
}
