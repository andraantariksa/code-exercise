pub struct Coord {
    x: i32,
    y: i32,
}

impl Solution {
    pub fn judge_circle(moves: String) -> bool {
        let mut c = Coord { x: 0, y: 0 };
        for z in moves.chars() {
            match z {
                'U' => {
                    c.y = c.y + 1;
                }
                'D' => {
                    c.y = c.y - 1;
                }
                'L' => {
                    c.x = c.x - 1;
                }
                'R' => {
                    c.x = c.x + 1;
                }
                _ => {}
            };
        }
        if c.x == 0 && c.y == 0 {
            true
        } else {
            false
        }
    }
}
