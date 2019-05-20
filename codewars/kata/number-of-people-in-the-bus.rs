fn number(bus_stops: &[(i32, i32)]) -> i32 {
    bus_stops.iter().fold(0, |x, y| x + y.0 - y.1)
}
