fn knapsackLight(value1: i32, weight1: i32, value2: i32, weight2: i32, maxW: i32) -> i32 {
    if weight1 + weight2 <= maxW {
        value1 + value2
    }else{
        if value1 > value2 && weight1 <= maxW {
            value1
        }else if value1 < value2 && weight2 <= maxW {
            value2
        }else{
            if weight1 <= maxW {
                value1
            }else if weight2 <= maxW {
                value2
            }else{
                0
            }
        }
    }
}
