fn sq_in_rect(lng: i32, wdth: i32) -> Option<Vec<i32>> {
    let mut lng = lng;
    let mut wdth = wdth;
    if lng != wdth {
        let mut out = Vec::new();
        while lng != wdth {
            if wdth > lng {
                wdth = wdth - lng;
                out.push(lng);
            } else if lng > wdth {
                lng = lng - wdth;
                out.push(wdth);
            }
        }
        out.push(wdth);
        Some(out)
    } else {
        None
    }
}

/*
let mut area = lng * wdth;
let mut side_temp = wdth;
let mut side = Vec::new();
let mut try_again;
while side_temp > 0 {
    try_again = true;
    while try_again {
        try_again = false;
        if area - (side_temp * side_temp) >= 0 {
            area = area - (side_temp * side_temp);
            side.push(side_temp);
            try_again = true;
        }
    }
    side_temp = side_temp - 1;
}
println!("{:?} {:?}", side, area);
if area == 0 {
    Some(side)
} else {
    None
}*/
