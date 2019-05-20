fn find_duplicate(num_list: Vec<i32>) -> i32{
    let mut num_reached = Vec::new();
    let mut total = 0;
    num_reached.push(0);
    loop {
        for i in num_list.iter(){
            total += i;
            if num_reached.contains(&total) {
                return total;
            }
            num_reached.push(total);
        }
    }
}

pub fn main() {
    let mut input;
    let mut num_list = Vec::new();
    loop {
        input = String::new();
        match std::io::stdin().read_line(&mut input){
            Ok(x) => {
                match x {
                    0 => {
                        break;
                    }
                    _ => {}
                }
            }
            Err(_) => {
                break;
            }
        };
        input.pop();
        num_list.push(input.parse().expect("Expecting a number"));
    }
    println!("Sum: {}\nFirst frequency reached twice: {}", num_list.iter().sum::<i32>(), find_duplicate(num_list));
}
