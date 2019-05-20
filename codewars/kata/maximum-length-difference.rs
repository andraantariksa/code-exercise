fn mx_dif_lg(a1: Vec<&str>, a2: Vec<&str>) -> i32 {
    if a1.len() == 0 || a2.len() == 0 {
        return -1;
    }
    let (a1_min, a1_max) = (
        a1.iter().fold(std::i32::MAX, |x, y| {
            if (y.len() as i32) < x {
                y.len() as i32
            } else {
                x
            }
        }),
        a1.iter().fold(std::i32::MIN, |x, y| {
            if (y.len() as i32) > x {
                y.len() as i32
            } else {
                x
            }
        }),
    );
    let (a2_min, a2_max) = (
        a2.iter().fold(std::i32::MAX, |x, y| {
            if (y.len() as i32) < x {
                y.len() as i32
            } else {
                x
            }
        }),
        a2.iter().fold(std::i32::MIN, |x, y| {
            if (y.len() as i32) > x {
                y.len() as i32
            } else {
                x
            }
        }),
    );
    if a1_max - a2_min > a2_max - a1_min {
        a1_max - a2_min
    } else {
        a2_max - a1_min
    }
}
