use std::io::{self, BufRead};

fn digitalRoot(n: i128) -> i128 {
    n - (9 * ((n - 1) / 9))
}

fn reverseDigitalRoot(root: i128, index: i128) -> i128 {
    let mut base: i128 = 0;
    let mut digiroot: i128 = 0;
    let mut n: i128 = 0;
    for _ in 0..9 {
        digiroot = digitalRoot(n);
        if digiroot == root {
            base = n;
        }
        n = n + 1;
    }
    n = base;
    let mut i = 0;
    loop {
        n = base + 9 * i;
        i = i + 1;
        if i == index {
            return n;
        }
    }
}

fn main() {
    let mut input_text = String::new();
    std::io::stdin().read_line(&mut input_text).expect("Fail");
    let total_input: i128 = input_text.trim().parse().unwrap();
    for _ in 0..total_input {
        let reader = io::stdin();
        let numbers: Vec<i128> = reader
            .lock() // (0)
            .lines()
            .next()
            .unwrap()
            .unwrap() // (1)
            .split(' ')
            .map(|s| s.trim()) // (2)
            .filter(|s| !s.is_empty()) // (3)
            .map(|s| s.parse().unwrap()) // (4)
            .collect();
        println!("{}", reverseDigitalRoot(numbers[1], numbers[0]));
    }
}

/*
function reverseDigitalRootByRange(S, dr) {


    //s to string, and n is a number counter
    var base, digiroot = 0, s = "", n = S[0]; //number counter
    //find the lowest number that adds to the digital root within the base
    for (i = 0; i < 9; i++) {
        digiroot = digitalRoot(n);
        if (digiroot === dr)
            base = n;
        n++;
    }
    s = s + "\n" + base;
    n = base;
    //base is correct, now add multiples of 9 until base is > than b in [a,b].
    var i = 0;
    while (n < S[1]){
        n = base + 9 * i; //from the base adding multiples of 9 (iterating upward the variable multiplying 9).

        if (n > S[S.length-1])  //stop if already over that range.
            break;

        s = s + "\n" + n; //include it in the string s
        i++;
    }
    //get rid of the repeated number @ the beginning. quicksloppy fix.
    s = s.slice(3);
    if (base == undefined){  //how to test if s is null
        return "No reverse digital roots in that given range";

    }
    else{
        return "\n" + s;
    }
}  */
