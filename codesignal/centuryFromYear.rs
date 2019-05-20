fn centuryFromYear(year: i32) -> i32 {
    (year / 100) + if year % 100 == 0 { 0 }else{ 1 }
}
