fn isInfiniteProcess(a: i32, b: i32) -> bool {
    a > b || (b - a) % 2 != 0
}
