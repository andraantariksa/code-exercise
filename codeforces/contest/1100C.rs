/*input
3 1
*/
fn main(){
	let mut input = String::new();
	std::io::stdin().read_line(&mut input).expect("Input error");
	let input_segment: Vec<f64> = input.split_whitespace().map(|x| x.parse().expect("Not an integer")).collect();
	let a: f64 = input_segment[0];
	let b: f64 = input_segment[1];
	let angle: f64 = (a-2.0)/(2.0*a)*180.0;
	let outer_radius: f64 = angle.to_radians().cos()/(1.0-angle.to_radians().cos());
	println!("{:.7}", outer_radius*b);
}