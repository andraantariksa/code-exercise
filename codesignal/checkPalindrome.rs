fn checkPalindrome(inputString: String) -> bool {
    inputString == inputString.chars().rev().collect::<String>()
}