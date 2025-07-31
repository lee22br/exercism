object EliudsEggs {

    fun eggCount(number: Int): Int{
        var count = 0
        var odd = number
        while (odd > 0) {
            if (odd % 2 != 0) {
                count ++
            }
            odd = odd / 2
        }
        return count
    }
}
