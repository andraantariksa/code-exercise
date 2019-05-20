fn extractMatrixColumn(matrix: Vec<Vec<i32>>, column: i32) -> Vec<i32> {
    let mut out_col = Vec::new();
    for i in 0..matrix.len() {
        out_col.push(matrix[i][column as usize]);
    }
    out_col
}
