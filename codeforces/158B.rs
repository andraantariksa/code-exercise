/*input
3
3 3 2
*/
fn main() {
	let mut inp = String::new();
	std::io::stdin().read_line(&mut inp).expect("Failed to read line");
	let mut inp = String::new();
	std::io::stdin().read_line(&mut inp).expect("Failed to read line");
	let mut passanger: [i64; 4] = [0; 4];
	for i in inp.split_whitespace(){
		passanger[i.parse::<usize>().unwrap()-1] += 1;
	}
	let mut total_car = passanger[3]+passanger[2]+passanger[1]/2;
	passanger[0] -= passanger[2];
	if passanger[1]%2 == 1{
		total_car += 1;
		passanger[0] -= 2;
	}
	if passanger[0] > 0{
		total_car += (passanger[0]+3)/4
	}
	println!("{:?}", total_car);
}