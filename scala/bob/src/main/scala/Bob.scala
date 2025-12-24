object Bob {
  def response(statement: String): String =
  val trimmed = statement.trim
  val isSilent = trimmed.isEmpty
  val isQuestion = trimmed.endsWith("?")
  val isYelling = trimmed.exists(_.isLetter) && trimmed.forall(c => !c.isLetter || c.isUpper)
  if isSilent then "Fine. Be that way!"
  else if isQuestion && isYelling then "Calm down, I know what I'm doing!"
  else if isYelling then "Whoa, chill out!"
  else if isQuestion then "Sure."
  else "Whatever."
}
