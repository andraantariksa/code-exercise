fn adjacentElementsProduct(inputArray: Vec<i32>) -> i32 {
    let mut max_val = std::i32::MIN;
    for i in 0..inputArray.len() - 1 {
        if inputArray[i] * inputArray[i + 1] > max_val {
            max_val = inputArray[i] * inputArray[i + 1];
        }
    }
    max_val
}
