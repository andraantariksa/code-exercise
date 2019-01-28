/*input
5
*/
fn main() {
	let mut input = String::new();
	std::io::stdin().read_line(&mut input).expect("Panic");
	let inp: u16 = input.trim().parse::<u16>().unwrap();
	for i in 1..(inp+1) {
		println!("{} Abracadabra", i);
	}
}