fn fareEstimator(
    ride_time: i32,
    ride_distance: i32,
    cost_per_minute: Vec<f64>,
    cost_per_mile: Vec<f64>,
) -> Vec<f64> {
    cost_per_minute
        .iter()
        .enumerate()
        .map(|(i, v)| v * ride_time as f64 + cost_per_mile[i] * ride_distance as f64)
        .collect::<Vec<f64>>()
}
