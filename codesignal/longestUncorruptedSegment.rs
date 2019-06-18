fn longestUncorruptedSegment(sourceArray: Vec<i32>, destinationArray: Vec<i32>) -> Vec<i32> {
    let mut max_i_start = 0;
    let mut max_len = 0;
    let mut i_start = 0;
    let mut len = 0;
    for (k, v) in sourceArray.iter().zip(destinationArray).enumerate() {
        if v.0 != &v.1 {
            if len > max_len {
                max_len = len;
                max_i_start = i_start;
            }
            len = 0;
            i_start = k + 1;
        }else{
            len += 1;
        }
    }
    if len > max_len {
        max_len = len;
        max_i_start = i_start;
    }
    vec![max_len, max_i_start as i32]
}
