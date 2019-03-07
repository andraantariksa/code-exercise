fn is_negative_zero(n: f32) -> bool {
    if n == -0.0 {
        if 1.0 / n == f32::NEG_INFINITY {
            true
        } else {
            false
        }
    } else {
        false
    }
}

/*
Another solution
    ```
    n == 0.0 && n.is_sign_negative()
    ```
*/
