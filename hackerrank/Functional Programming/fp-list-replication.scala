def f(num:Int,arr:List[Int]):List[Int] = {
    var ret = List.empty[Int]
    for(i2: Int <- arr.reverse){
        for(i: Int <- 1 to num){
            ret = i2 :: ret
        }
    }
    ret
}