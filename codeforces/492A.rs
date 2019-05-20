/*input
3
*/
fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let mut input_num: i16 = input.trim().parse::<i16>().unwrap();
    let mut substractor: i16 = 0;
    let mut iter: i16 = 0;
    while input_num > 0 {
        iter = iter + 1;
        substractor = substractor + iter;
        input_num = input_num - substractor;
        if input_num < 0 {
            iter = iter - 1;
        }
    }
    println!("{}", iter);
}
