/*input
5
4
2,4
3,5
1,2
3,4
*/
fn main() {
    let mut s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    let n: u16 = s.trim().parse().expect("");
    let mut v: Vec<u16> = vec![];
    for i in 1..n + 1 {
        v.push(i);
    }
    s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    let m: u16 = s.trim().parse().expect("");
    let mut o: Vec<usize>;
    let mut temp;
    for _ in 0..m {
        s = format!("");
        std::io::stdin().read_line(&mut s).expect("");
        o = s
            .trim()
            .split(",")
            .map(|x| x.parse::<usize>().expect("") - 1)
            .collect();
        temp = v[o[0]];
        v[o[0]] = v[o[1]];
        v[o[1]] = temp;
    }
    for i in v {
        println!("{}", i);
    }
}
