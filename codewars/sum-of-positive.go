package kata

func PositiveSum(numbers []int) int {
  total := 0
  for _, i := range numbers{
    if(i > 0){
      total += i
    }
  }
  return total
}
