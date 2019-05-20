impl Solution {
    pub fn can_visit_all_rooms(rooms: Vec<Vec<i32>>) -> bool {
        let mut vect = vec![false; rooms.len()];
        vect[0] = true;
        for _ in 0..rooms.len(){
            for (i, v) in rooms.iter().enumerate(){
                if v.len() == 0usize{
                    vect[i] = true;
                    continue;
                }
                if vect[i]{
                    for j in v{
                        vect[*j as usize] = true;
                    }
                }
            }
        }
        for i in vect{
            if i == false{
                return false;
            }
        }
        true
    }
}
