/*input
0
1
1
*/
fn read_line() -> String {
    let mut return_ = format!("");
    std::io::stdin().read_line(&mut return_).ok();
    return_
}

fn main() {
    let mut arr = [0i32; 3];
    arr[0] = read_line().trim().parse().expect("");
    arr[1] = read_line().trim().parse().expect("");
    arr[2] = read_line().trim().parse().expect("");
    let arrr = [
        arr[0] + arr[1] + arr[2],
        arr[0] + arr[1] - arr[2],
        arr[0] + arr[1] * arr[2],
        arr[0] - arr[1] + arr[2],
        arr[0] - arr[1] - arr[2],
        arr[0] - arr[1] * arr[2],
        arr[0] * arr[1] + arr[2],
        arr[0] * arr[1] - arr[2],
        arr[0] * arr[1] * arr[2],
    ];
    println!("{}", arrr.iter().min().unwrap());
}
