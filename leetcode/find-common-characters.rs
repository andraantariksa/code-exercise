impl Solution {
    pub fn common_chars(a: Vec<String>) -> Vec<String> {
        let mut alph = vec![vec![0; 26]; a.len()];
        let mut ret = vec![];
        let mut temp;
        let mut min;
        for i in a.iter(){
            temp = vec![0; 26];
            for j in i.chars(){
                temp[((j as u8) - 97) as usize] += 1;
            }
            alph.push(temp);
        }
        for i in 0..26{
            min = std::i32::MAX;
            for j in a.len(){
                if alph[j][i] == 0{
                    break;
                }else{
                    if alph[j][i] < min{
                        min = alph[j][i];
                    }
                }
            }
            for _ in 0..min/a.len(){
                ret.push(((i + 97) as u8) as char);
            }
        }
        ret.iter().map(|x| x.to_string()).collect::<_>()
    }
}


