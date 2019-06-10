fn phoneCall(min1: i32, min2_10: i32, min11: i32, mut s: i32) -> i32 {
     let mut min = 0;
     if s < min1 {
          return min;
     }
     s -= min1;
     min += 1;
     while min < 10 {
          if s < min2_10 {
               return min;
          }
          s -= min2_10;
          min += 1;
     }
     while s >= min11 {
          s -= min11;
          min += 1;
     }
     min
}
