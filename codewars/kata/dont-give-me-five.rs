fn dont_give_me_five(start: isize, end: isize) -> isize {
    (start..=end)
        .filter(|x| match x.to_string().find("5") {
            Some(_) => false,
            None => true,
        })
        .count() as isize
}
