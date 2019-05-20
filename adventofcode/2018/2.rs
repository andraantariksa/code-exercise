fn common_word(s1: &str, s2: &str) -> Option<String> {
    if s1.len() != s2.len() {
        return None;
    }
    let mut not_same = 0;
    for (c1, c2) in s1.chars().zip(s2.chars()) {
        if c1 != c2 {
            not_same += 1;
        }
        if not_same > 1 {
            return None;
        }
    }
    Some(s1.chars().zip(s2.chars()).filter(|(c1, c2)| &c1 == &c2).map(|(x, _)| x).collect())
}

pub fn main() {
    let mut s;
    let mut s_vec = Vec::new();
    let mut alph = [0i32; 26];
    let (mut __2, mut __3);
    let (mut _2, mut _3) = (0, 0);
    loop{
        __2 = false;
        __3 = false;
        for i in alph.iter_mut() { *i = 0; }
        s = String::new();
        match std::io::stdin().read_line(&mut s) {
            Ok(x) => {
                match x {
                    0 => {
                        break;
                    },
                    _ => {}
                }
            },
            Err(_) => {
                break;
            }
        }
        s.pop();
        for i in s.chars(){
            alph[(i as u8 - 97u8) as usize] += 1;
        }
        for i in alph.iter() {
            if !__3 {
                if *i == 3 {
                    __3 = true;
                    _3 += 1;
                }
            }
            if !__2 {
                if *i == 2 {
                    __2 = true;
                    _2 += 1;
                }
            }

        }
        s_vec.push(s);
    }
    println!("The checksum of list of box IDs: {}", _2*_3);
    for i in 0..s_vec.len() {
        for j in i + 1..s_vec.len() {
            match common_word(&s_vec[i], &s_vec[j]) {
                Some(x) => {
                    println!("Common letter between two correct box IDs: {}", x);
                    std::process::exit(0);
                },
                None => {}
            }
        }
    }
}
