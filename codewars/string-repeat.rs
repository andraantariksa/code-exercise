fn repeat_str(src: &str, count: usize) -> String {
  let mut s = String::new();
  for _ in 0..count{
      s.push_str(src);
  }
  s
}
