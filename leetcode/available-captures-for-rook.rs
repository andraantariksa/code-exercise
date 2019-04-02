impl Solution {
    pub fn check_rook_capture(x: i32, y: i32, board: &Vec<Vec<char>>) -> i32{
        let mut capt_pawn = 0;
        // down
        for i in x + 1..8 {
            if board[i as usize][y as usize] != '.' {
                if board[i as usize][y as usize] == 'p' {
                    //println!("d");
                    capt_pawn += 1;
                }
                break;
            }
        }
        // up
        for i in (0..x).rev() {
            if board[i as usize][y as usize] != '.' {
                if board[i as usize][y as usize] == 'p' {
                    //println!("u");
                    capt_pawn += 1;
                }
                break;
            }
        }
        // right
        for i in y + 1..8 {
            if board[x as usize][i as usize] != '.' {
                if board[x as usize][i as usize] == 'p' {
                    capt_pawn += 1;
                    //println!("r");
                }
                break;
            }
        }
        // left
        for i in (0..y).rev() {
            if board[x as usize][i as usize] != '.' {
                if board[x as usize][i as usize] == 'p' {
                    capt_pawn += 1;
                    //println!("l");
                }
                break;
            }
        }
        capt_pawn
    }
    pub fn num_rook_captures(board: Vec<Vec<char>>) -> i32 {
        for x in 0..8{
            for y in 0..8{
                if board[x][y] == 'R'{
                    return Solution::check_rook_capture(x as i32, y as i32, &board);
                }
            }
        }
        0
    }
}
