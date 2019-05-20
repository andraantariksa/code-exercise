fn simplifyPath(path: String) -> String {
    let mut out_path: Vec<&str> = Vec::new();
    for i in path.split("/") {
        if i == "" || i == "." {
            continue;
        } else if i == ".." {
            out_path.pop();
        } else {
            out_path.push(i);
        }
    }
    String::from("/") + &out_path.join("/")
}
