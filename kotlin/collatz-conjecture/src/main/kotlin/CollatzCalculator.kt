object CollatzCalculator {
    fun computeStepCount(start: Int): Int {
        var actualNum = start
        var steps: Int = 0
        require(start > 0) {"Only positive natural numbers are allowed"}

        while (actualNum > 1){
            if (isEven(actualNum)){
                actualNum = actualNum / 2;
            } else {
                actualNum = actualNum * 3 + 1;
            }
            steps ++;
        }
        return steps;
    }

    fun isEven(num: Int): Boolean {
        return num % 2 == 0;
    }
}
