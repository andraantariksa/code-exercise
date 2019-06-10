fn arithmeticExpression(a: i32, b: i32, c: i32) -> bool {
    a + b == c || a - b == c || (a / b == c && a % b == 0) || a * b == c
}
