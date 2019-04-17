fn longest_consec(strarr: Vec<&str>, k: usize) -> String {
    let strarr = strarr.iter().map(|x| x.to_string()).collect::<Vec<String>>();
    if k > strarr.len() {
        String::from("")
    }else{
        let mut longest_str = String::from("");
        let mut temp;
        for i in 0..strarr.len() - k + 1 {
             temp = strarr[i..i + k].join("");
             if longest_str.len() < temp.len(){
                 longest_str = temp.clone();
             }
        }
        longest_str
    }
}
