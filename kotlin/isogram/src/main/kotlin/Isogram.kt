object Isogram {

    fun isIsogram(input: String): Boolean {
        var letters = input.filter { c -> c.isLetter() }.toLowerCase().toSet().size
        return input.replace(" ", "").replace("-", "").length == letters
    }
}
