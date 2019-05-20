extern crate regex;

use regex::Regex;

fn travel(r: &str, zipcode: &str) -> String {
    let address_list = r.split(",").collect::<Vec<&str>>();
    let mut number: Vec<&str> = Vec::new();
    let mut address: Vec<String> = Vec::new();
    if zipcode == "" {
        return String::from(":/");
    }
    for i in address_list.iter() {
        match i.ends_with(zipcode) {
            true => {
                address.push(
                    i.trim()
                        .replace(zipcode, "")
                        .split(" ")
                        .skip(1)
                        .fold(String::new(), |mut x, y| {
                            x.push_str(" ");
                            x.push_str(y);
                            x
                        })
                        .trim()
                        .to_string(),
                );
                number.push(i.trim().split(" ").nth(0).unwrap());
            }
            false => {}
        }
    }
    format!("{}:{}/{}", zipcode, address.join(","), number.join(","))
}

fn ad() -> String {
    return String::from("123 Main Street St. Louisville OH 43071, 432 Main Long Road St. Louisville OH 43071,786 High Street Pollocksville NY 56432,
      54 Holy Grail Street Niagara Town ZP 32908, 3200 Main Rd. Bern AE 56210,1 Gordon St. Atlanta RE 13000,
      10 Pussy Cat Rd. Chicago EX 34342, 10 Gordon St. Atlanta RE 13000, 58 Gordon Road Atlanta RE 13000,
      22 Tokyo Av. Tedmondville SW 43098, 674 Paris bd. Abbeville AA 45521, 10 Surta Alley Goodtown GG 30654,
      45 Holy Grail Al. Niagara Town ZP 32908, 320 Main Al. Bern AE 56210, 14 Gordon Park Atlanta RE 13000,
      100 Pussy Cat Rd. Chicago EX 34342, 2 Gordon St. Atlanta RE 13000, 5 Gordon Road Atlanta RE 13000,
      2200 Tokyo Av. Tedmondville SW 43098, 67 Paris St. Abbeville AA 45521, 11 Surta Avenue Goodtown GG 30654,
      45 Holy Grail Al. Niagara Town ZP 32918, 320 Main Al. Bern AE 56215, 14 Gordon Park Atlanta RE 13200,
      100 Pussy Cat Rd. Chicago EX 34345, 2 Gordon St. Atlanta RE 13222, 5 Gordon Road Atlanta RE 13001,
      2200 Tokyo Av. Tedmondville SW 43198, 67 Paris St. Abbeville AA 45522, 11 Surta Avenue Goodville GG 30655,
      2222 Tokyo Av. Tedmondville SW 43198, 670 Paris St. Abbeville AA 45522, 114 Surta Avenue Goodville GG 30655,
      2 Holy Grail Street Niagara Town ZP 32908, 3 Main Rd. Bern AE 56210, 77 Gordon St. Atlanta RE 13000,
      100 Pussy Cat Rd. Chicago OH 13201");
}

fn dotest(r: &str, zipcode: &str, exp: &str) -> () {
    //println!("r:{:?}", r);
    println!(" zipcode:{:?}", zipcode);
    let ans = travel(r, zipcode);
    println!("actual: {:?}", ans);
    println!("expect: {:?}", exp);
    println!("{}", ans == exp);
    assert_eq!(ans, exp);
    println!("{}", "-");
}

fn main() {
    let r = &ad();
    dotest(r, "OH 430", "OH 430:/");
}
