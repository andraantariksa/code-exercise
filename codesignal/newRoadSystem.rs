fn newRoadSystem(roadRegister: Vec<Vec<bool>>) -> bool {
    let mut inc = vec![0i32; roadRegister.len()];
    let mut out = vec![0i32; roadRegister.len()];
    for i in 0..roadRegister.len() {
        for j in 0..roadRegister[i].len() {
            if roadRegister[i][j] {
                inc[i] += 1;
                out[j] += 1;
            }
        }
    }
    !out.iter().zip(inc.iter()).any(|(x, y)| x != y)
}
