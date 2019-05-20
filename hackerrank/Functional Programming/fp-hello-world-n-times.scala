object Solution extends App {
    def f(n: Int){
        var _ = 0
        for(_ <- 1 to n){
            println("Hello World")
        }
    }

  var n = scala.io.StdIn.readInt
  f(n)
}
