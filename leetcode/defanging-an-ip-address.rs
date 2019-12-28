impl Solution {
    pub fn defang_i_paddr(address: String) -> String {
        address.chars().fold(String::new(), |acc, val| {            
            format!("{}{}{}{}", acc, if val == '.' {
                "["
            } else { "" }, val, if val == '.' {
                "]"
            } else { "" })
        })
    }
}