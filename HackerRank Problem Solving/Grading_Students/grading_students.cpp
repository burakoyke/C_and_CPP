/*
 HackerLand University has the following grading policy:

 -Every student receives a grade in the inclusive range 0 from 100 to .
 -Any grade less than 40 is a failing grade.
 Sam is a professor at the university and likes to round each student's grade according to these rules:

 -If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5.
 -If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
*/
vector<int> gradingStudents(vector<int> grades) {
    vector <int> roundedGrade;
    for (auto e : grades) {
        if (e > 37) {
            if (e % 5 >2) {
            e += 5-(e % 5);
            roundedGrade.push_back(e);
        } else {
            roundedGrade.push_back(e);
        }
        } else {
            roundedGrade.push_back(e);
        }
        
    }
    
    return roundedGrade;
}
