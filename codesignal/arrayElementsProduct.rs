fn arrayElementsProduct(inputArray: Vec<i32>) -> i32 {
    inputArray.iter().fold(1, |acc, x| acc * x)
}
