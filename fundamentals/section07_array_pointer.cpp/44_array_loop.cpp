// Section 6 - 6.1 ~ 6.3
// Focus: array and loop
#include <iostream>
#include <limits>

using namespace std;

int main() 
{
    
    int scores[] = {84,92,76,81,56};
    const int num_students = sizeof(scores) / sizeof(scores[0]);

    int total_scores = 0;
    int max_score = std::numeric_limits<int>::lowest();
    int min_score = std::numeric_limits<int>::max();

    for (int i = 0; i < num_students; i++)
    {
        total_scores += scores[i];
        if (scores[i] > max_score)
            max_score = scores[i];
        // max_score = (max_score < scores[i]) ? scores[i] : max_score;
        min_score = (min_score > scores[i]) ? scores[i] : min_score;
    }

    double avg_score = static_cast<double>(total_scores) / num_students;

    cout << max_score << endl;
    cout << avg_score << endl;
    cout << min_score << endl;

    return 0;
}