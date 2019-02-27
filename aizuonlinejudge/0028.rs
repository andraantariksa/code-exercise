/*input
5
6
3
5
8
7
5
3
9
7
3
4
*/
use std::iter::FromIterator;

fn main() {
    let mut v: Vec<u16> = vec![];
    let mut s = format!("");
    loop {
        match std::io::stdin().read_line(&mut s) {
            Ok(x) => match x {
                0 => break,
                _ => {
                    s.pop();
                    v.push(s.parse().expect(""));
                    s = format!("");
                }
            },
            Err(_) => {}
        }
    }
    let mut number_frecuency: std::collections::BTreeMap<u16, u16> =
        std::collections::BTreeMap::new();
    for number in v.iter() {
        *number_frecuency.entry(*number).or_insert(0) += 1;
    }
    let longest = number_frecuency
        .iter()
        .fold(0, |max_frecuency, number_frecuency_now| {
            if number_frecuency_now.1 > &max_frecuency {
                *number_frecuency_now.1
            } else {
                max_frecuency
            }
        });
    let mut v2 = Vec::from_iter(number_frecuency);
    v2.sort_by(|&(a, _), &(b, _)| a.cmp(&b));
    for i in v2.iter() {
        if i.1 == longest {
            println!("{}", i.0);
        }
    }
}
