#include <array>
#include <string>
#include <vector>

using std::vector;
using std::array;
using std::string;

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    vector<int> scores {};
    int numScores = student_scores.size();
    for (int i = 0; i < numScores; i++) {
        double score = student_scores.at(i);
        scores.push_back(score);
    }
    return scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(vector<int> student_scores) {
    int count{0};
    int l = student_scores.size();

    for (int i{0}; i < l; i++) {
        if (student_scores.at(i) <= 40) {
            count++;
        }
    }
    return count;
}


// Create a list of grade thresholds based on the provided highest grade.
array<int, 4> letter_grades(int highest_score) {
    int step = (highest_score - 40) / 4;
    int D = 40 + 1;
    int C = D + step;
    int B = C + step;
    int A = B + step;

    return array<int, 4> {D, C, B, A};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    vector<string> ranking {};
    int l = student_scores.size();
    for (int i{0}; i < l; i++) {
        int score = student_scores.at(i);
        string name = student_names.at(i);
        ranking.push_back(std::to_string(i + 1) + ". " + name + ": " + std::to_string(score));
    }

    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    int l = student_scores.size();
    for (int i{0}; i < l; i++) {
        int score = student_scores.at(i);
        if (score == 100) {
            return student_names.at(i);
        }
    }
    return "";
}
