use std::collections::HashMap;

fn main() {
    let input = include_str!("3.in");
    let mut input_lines = input.lines();

    let v1 = input_lines.next().unwrap().split(",").collect::<Vec<&str>>();
    let v2 = input_lines.next().unwrap().split(",").collect::<Vec<&str>>();

    let mut current: (i32, i32) = (0, 0);
    let mut step = HashMap::<(i32, i32), i32>::new();
    
    // Each step can came to the same place more than one, it should be counted as 1 though
    // So I'm using a "hack" with 1 and 100

    for i in v1.iter() {
        let dir = &i[..1];
        let total_step = &i[1..].parse::<i32>().unwrap();

        if dir == "R" {
            for i in current.0 + 1..=(current.0 + total_step) {
                // println!("{:?}", (i, current.1));
                *step.entry((i, current.1)).or_insert(0) += 1;
            }
            current.0 += total_step;
        } else if dir == "L" {
            for i in (current.0 - total_step)..(current.0) {
                // println!("{:?}", (i, current.1));
                *step.entry((i, current.1)).or_insert(0) += 1;
            }
            current.0 -= total_step;
        } else if dir == "U" {
            for i in current.1 + 1..=(current.1 + total_step) {
                // println!("{:?}", (current.0, i));
                *step.entry((current.0, i)).or_insert(0) += 1;
            }
            current.1 += total_step;
        } else {
            for i in (current.1 - total_step)..(current.1) {
                // println!("{:?}", (current.0, i));
                *step.entry((current.0, i)).or_insert(0) += 1;
            }
            current.1 -= total_step;
        }
    }

    // println!("=====");

    current = (0, 0);

    for i in v2.iter() {
        let dir = &i[..1];
        let total_step = &i[1..].parse::<i32>().unwrap();

        if dir == "R" {
            for i in current.0 + 1..=(current.0 + total_step) {
                *step.entry((i, current.1)).or_insert(0) += 100;
            }
            current.0 += total_step;
        } else if dir == "L" {
            for i in (current.0 - total_step)..(current.0) {
                *step.entry((i, current.1)).or_insert(0) += 100;
            }
            current.0 -= total_step;
        } else if dir == "U" {
            for i in current.1 + 1..=(current.1 + total_step) {
                *step.entry((current.0, i)).or_insert(0) += 100;
            }
            current.1 += total_step;
        } else {
            for i in (current.1 - total_step)..(current.1) {
                *step.entry((current.0, i)).or_insert(0) += 100;
            }
            current.1 -= total_step;
        }
    }

    let mut min = std::i32::MAX;

    for (loc, tot) in step.iter() {
        if tot > &100 && tot % &100 > 0 {
            let new_min = loc.0.abs() + loc.1.abs();
            if new_min < min {
                min = new_min;
            }
        }
    }
    
    println!("{}", min);
}