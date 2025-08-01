object ETL {
    fun transform(source: Map<Int, Collection<Char>>): Map<Char, Int> {
        val result = HashMap<Char, Int>()
        for ((key, values) in source) {
            for (value in values) {
                result[value.toLowerCase()] = key;
            }
        }
        return result
    }
}
