fn xo(string: &'static str) -> bool {
    let c = string.chars().fold((0, 0),|x, y| if y == 'x' || y == 'X' { (x.0+1, x.1) }else if y == 'o' || y == 'O' { (x.0, x.1+1) }else { (x.0, x.1) });
    c.0 == c.1
}
