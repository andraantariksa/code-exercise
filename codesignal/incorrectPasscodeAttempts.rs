fn incorrectPasscodeAttempts(passcode: String, attempts: Vec<String>) -> bool {
    let mut attempt = 0;
    for i in attempts.iter() {
        if i != &passcode {
            attempt += 1;
            if attempt == 10 {
                return true;
            }
        } else {
            attempt = 0;
        }
    }
    false
}
