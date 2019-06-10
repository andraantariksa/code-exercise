fn tennisSet(mut score1: i32, mut score2: i32) -> bool {
    if score1 < score2 {
        std::mem::swap(&mut score1, &mut score2);
    }
    if (score1 == 6 && score2 < 5) || (score1 == 7 && score2 < 7) && score2 >= 5 {
        true
    }else{
        false
    }
}
