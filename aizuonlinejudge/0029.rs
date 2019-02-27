/*input
Thank you for your mail and your lectures
*/
fn main() {
    let mut s = format!("");
    std::io::stdin().read_line(&mut s).expect("");
    s.pop();
    s = s.to_lowercase();
    let word_list: Vec<&str> = s.split_whitespace().collect();
    let mut word_frecuency: std::collections::HashMap<&str, u16> = std::collections::HashMap::new();
    for word in word_list.iter() {
        *word_frecuency.entry(*word).or_insert(0) += 1;
    }
    println!(
        "{} {}",
        word_frecuency
            .iter()
            .fold(("", 0), |max_frecuency, str_frecuency_now| {
                if str_frecuency_now.1 > &max_frecuency.1 {
                    (*str_frecuency_now.0, *str_frecuency_now.1)
                } else {
                    max_frecuency
                }
            })
            .0,
        word_list
            .iter()
            .fold("", |max_size, str_now| if str_now.len() > max_size.len() {
                str_now
            } else {
                max_size
            })
    );
}
