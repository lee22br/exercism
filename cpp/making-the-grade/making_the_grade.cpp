#include <array>
#include <string>
#include <vector>

using std::vector;
using std::array;
using std::string;

// Round down all provided student scores.
vector<int> round_down_scores(vector<double> student_scores) {
    vector<int> scores {};
    int numScores = student_scores.size();
    for (int i = 0; i < numScores; i++) {
        double score = student_scores.at(i);
        scores.push_back(static_cast<int>(score));
    }

    return scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(vector<int> student_scores) {
    // TODO: Implement count_failed_students
    return 0;
}

// Create a list of grade thresholds based on the provided highest grade.
array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    return {};
}

// Organize the student's rank, name, and grade information in ascending order.
vector<string> student_ranking(
    vector<int> student_scores, vector<string> student_names) {
    // TODO: Implement student_ranking
    return {};
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
string perfect_score(vector<int> student_scores,
                          vector<string> student_names) {
    // TODO: Implement perfect_score
    return "";
}
