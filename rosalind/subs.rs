fn read_line() -> String{
    let mut _s = String::new();
    std::io::stdin().read_line(&mut _s).expect("");
    _s.pop();
    _s
}

fn main(){
    let a = read_line();
    let b = read_line();
    let mut first = true;
    for i in 0..a.len()-b.len(){
        if &b == &a[i..i+b.len()]{
            if first{
                first = false;
            }else{
                print!(" ");
            }
            print!("{}", i+1);
        }
    }
    print!("\n");
}
