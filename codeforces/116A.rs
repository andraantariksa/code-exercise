/*input
4
0 3
2 5
4 2
4 0
*/
fn main(){
	let mut total_passanger = 0;
	let mut max = 0;
	let mut input_total = String::new();
	std::io::stdin().read_line(&mut input_total).expect("Panic");
	for _ in 0..(input_total.trim().parse::<i32>().unwrap()){
		let mut input = String::new();
		std::io::stdin().read_line(&mut input).expect("Panic");
		let mut input_segment: Vec<i32> = input.trim().split_whitespace().map(|s| s.parse::<i32>().unwrap()).collect();
		total_passanger -= input_segment[0];
		total_passanger += input_segment[1];
		if total_passanger > max{
			max = total_passanger;
		}
	}
	println!("{:?}", max);
}