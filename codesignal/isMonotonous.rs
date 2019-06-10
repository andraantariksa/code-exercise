fn isMonotonous(sequence: Vec<i32>) -> bool {
   match sequence.len() {
      0 | 1 => true,
      _ => {
         let mut lt = true;
         if sequence[0] > sequence[1] {
             lt = false;
         }
         if !lt {
            for i in 0..sequence.len() - 1 {
               if sequence[i] <= sequence[i + 1] {
                     return false;
               }
            }
         } else {
            for i in 0..sequence.len() - 1 {
               if sequence[i] >= sequence[i + 1] {
                     return false;
               }
            }
         }
         true
      }
   }
}
