import scala.collection.immutable.SortedMap

class School {
  var studentGrades: Map[Int, List[String]] = Map()
  def db = {
    studentGrades
  }
  def add(name: String, studentGrade: Int) = {
    if (studentGrades.contains(studentGrade)) {
      studentGrades = studentGrades + (studentGrade -> (studentGrades(studentGrade) :+ name))
    } else {
      studentGrades = studentGrades + (studentGrade -> List(name))
    }
    studentGrades
  }
  def grade(studentGrade: Int): Seq[String] = {
    studentGrades.getOrElse(studentGrade, Seq())
  }
  def sorted: SortedMap[Int, Seq[String]] = {
    SortedMap[Int, Seq[String]]() ++ studentGrades.mapValues(names => names.sorted)
  }
}
