fn main(){
    let mut _s = String::new();
    std::io::stdin().read_line(&mut _s).expect("Err");
    _s.pop();
    let v = _s.split_whitespace().map(|x| x.parse::<i32>().unwrap()).collect::<Vec<i32>>();
    println!("{}", v[0]*(v[1]-1)+1);
}
