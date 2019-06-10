fn maxMultiple(divisor: i32, bound: i32) -> i32 {
    bound - (bound % divisor)
}
