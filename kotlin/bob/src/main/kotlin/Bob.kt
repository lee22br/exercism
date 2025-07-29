object Bob {
    fun hey(input: String): String {
        var result = "Whatever."
        if (input.isBlank()) {
            result = "Fine. Be that way!"
        } else if (input.any(Char::isLetter) && input.uppercase() == input) {
            if (input.trim().last() == '?'){
                result = "Calm down, I know what I'm doing!"
            } else{
                result = "Whoa, chill out!"
            }
        } else if (input.trim().last() == '?') {
            result = "Sure."
        }
        return result
    }
}
