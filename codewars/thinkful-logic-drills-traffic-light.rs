fn update_light(current: &str) -> String {
    if current == "green" {
        format!("yellow")
    }else if current == "yellow" {
        format!("red")
    }else if current == "red" {
        format!("green")
    }else{
        "".to_string()
    }
}
