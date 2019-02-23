/*input
3
3 2 1
*/
fn main() {
    let mut input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    //let n_arr: usize = input.trim().parse().expect("");
    input = format!("");
    std::io::stdin().read_line(&mut input).expect("");
    let mut arr: Vec<u64> = input
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let mut sorted: bool = false;
    let mut temp: u64;
    let mut step: u64 = 0;
    loop {
        sorted = true;
        for i in 0..arr.len() - 1 {
            if arr[i] > arr[i + 1] {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                step = step + 1;
                sorted = false;
            }
        }
        if sorted == true {
            break;
        }
    }
    println!(
        "Array is sorted in {} swaps.\nFirst Element: {}\nLast Element: {}",
        step,
        arr[0],
        arr[arr.len() - 1]
    );
}
