fn race(v1: i32, v2: i32, g: i32) -> Option<Vec<i32>> {
    if v1 >= v2 {
        return None;
    }
    let tot_sec = 3600*g/(v2-v1);
    Some(vec![tot_sec/3600, tot_sec%3600/60, tot_sec%60])
}
