fn allLongestStrings(inputArray: Vec<String>) -> Vec<String> {
    let array = inputArray.iter().map(|x| (x.len(), x.to_owned())).collect::<Vec<(usize, String)>>();
    let max = array.iter().fold(std::usize::MIN, |acc, ref x| if acc < x.0 { x.0 } else { acc });
    array.iter().filter(|&x| x.0 == max).map(|ref x| x.1.to_owned()).collect()
}
