fn main(){
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Error input");
    let mut v = input.trim().split_whitespace().map(|x| x.parse::<i32>().expect("Error parse")).collect::<Vec<i32>>();
    let max = v.iter().max().unwrap().clone();
    let index_max = v.iter().position(|x| x == &max).unwrap();
    v.remove(index_max);
    println!("{} {} {}", max - v[0], max - v[1], max - v[2]);
}
