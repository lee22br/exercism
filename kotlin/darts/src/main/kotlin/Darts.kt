import java.lang.StrictMath.pow
import kotlin.math.sqrt


object Darts {

    fun score(x: Number, y: Number): Int {
        val distance = sqrt(pow(x.toDouble(),2.0)  + pow(y.toDouble(), 2.0))
        var result = 0
        if (distance <= 1) result = 10
        if (distance > 1 && distance <= 5) result = 5
        if (distance > 5 && distance <= 10) result = 1
        return result
    }
}
