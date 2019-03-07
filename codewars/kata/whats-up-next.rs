fn next_item<T: PartialEq<T> + Clone>(slice: &[T], find: T) -> Option<T> {
    slice
        .into_iter()
        .skip_while(|&x| x != &find)
        .nth(1)
        .cloned()
}
