extern crate regex;

use regex::Regex;

fn catalog(s: &str, article: &str) -> String {
    let re = Regex::new(r"<prod><name>(.*)</name><prx>(.*)</prx><qty>(.*)</qty></prod>").unwrap();
    let catalog_list = re.replace_all(s, r"$1 > prx: $$$2 qty: $3");
    let catalog_list2 = catalog_list.split("\n").collect::<Vec<&str>>();
    let mut found: Vec<&str> = Vec::new();
    for i in catalog_list2 {
        match i.find(article) {
            Some(_) => {
                found.push(i);
            }
            None => {}
        }
    }
    let out = found.join("\n");
    if out == String::from("") {
        "Nothing".to_string()
    } else {
        out
    }
}
