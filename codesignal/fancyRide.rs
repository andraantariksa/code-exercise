fn fancyRide(l: i32, fares: Vec<f64>) -> String {
    let cars = ["UberX", "UberXL", "UberPlus", "UberBlack", "UberSUV"];
    for (i, v) in fares.iter().enumerate().rev() {
        if l as f64 * v <= 20.0 {
            return cars[i].to_owned();
        }
    }
    String::new()
}
