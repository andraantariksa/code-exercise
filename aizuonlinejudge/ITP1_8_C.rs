/*input
aaaA
abc
*/
fn main() {
    let mut alpha = std::collections::BTreeMap::new();
    alpha.insert('a', 0);
    alpha.insert('b', 0);
    alpha.insert('c', 0);
    alpha.insert('d', 0);
    alpha.insert('e', 0);
    alpha.insert('f', 0);
    alpha.insert('g', 0);
    alpha.insert('h', 0);
    alpha.insert('i', 0);
    alpha.insert('j', 0);
    alpha.insert('k', 0);
    alpha.insert('l', 0);
    alpha.insert('m', 0);
    alpha.insert('n', 0);
    alpha.insert('o', 0);
    alpha.insert('p', 0);
    alpha.insert('q', 0);
    alpha.insert('r', 0);
    alpha.insert('s', 0);
    alpha.insert('t', 0);
    alpha.insert('u', 0);
    alpha.insert('v', 0);
    alpha.insert('w', 0);
    alpha.insert('x', 0);
    alpha.insert('y', 0);
    alpha.insert('z', 0);
    let mut s;
    loop {
        s = format!("");
        match std::io::stdin().read_line(&mut s) {
            Ok(0) => {
                break;
            }
            Ok(_) => {
                for i in s.to_lowercase().chars() {
                    if i.is_alphabetic() {
                        *alpha.get_mut(&i).unwrap() += 1;
                    }
                }
            }
            Err(_) => {}
        };
    }
    //*alpha.get_mut(&i).unwrap() = *alpha.get_mut(&i).unwrap() + 1;
    for i in alpha {
        println!("{} : {}", i.0, i.1);
    }
}
