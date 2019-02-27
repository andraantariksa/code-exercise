/*input
6
5
3
1
3
4
3
*/
fn main() {
    let mut s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    let mut m;
    let (mut min, mut max) = (std::i32::MAX, std::i32::MIN);
    for _ in 0..s.clone().trim().parse::<i32>().unwrap() {
        s = format!("");
        std::io::stdin().read_line(&mut s).expect("");
        //println!("{:?}", s);
        m = s.trim().parse::<i32>().unwrap();
        if max < m - min {
            max = m - min;
        }
        if min > m {
            min = m;
        }
    }
    println!("{}", max);
}
