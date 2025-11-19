#include <iostream>
using namespace std;

enum StudentName { OLEH, IVAN, PETRO, MAX, DANYLO, SERGIY, TARAS };

struct Student {
    StudentName name;
    double averageMark;
    int course;
};

int main() {

    const int N = 7;
    Student group[N];

   
    double baseAvg = 95.0;     
    int baseCourse = 1;        
    char bonus = 2;            

    for (int i = 0; i < N; i++) {
        group[i].name = static_cast<StudentName>(i);
        group[i].averageMark = baseAvg - i * 3 + bonus; 
        group[i].course = baseCourse + (i % 2); 
    }

    
    int excFirstCourse = 0;
    int totalFirstCourse = 0;

    for (int i = 0; i < N; i++) {
        if (group[i].course == 1) {
            totalFirstCourse++;
            if (group[i].averageMark >= 90) {
                excFirstCourse++;
            }
        }
    }

    double percent = 0;
    if (totalFirstCourse > 0)
        percent = (double)excFirstCourse / totalFirstCourse * 100.0;

    cout << "Процент студентiв-вiдмiнникiв 1-го курсу: "
        << percent << "%\n";

    return 0;
}
