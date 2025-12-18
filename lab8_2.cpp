#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char findGrade(double x) {
    if(x > 90){
        return 'A';
    }
    else if(x > 75 && x <= 90){
        return 'B';
    }
    else if(x > 60 && x <= 75){
        return 'C';
    }
    else if(x > 45 && x <= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}


int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    string name[100];
    double score[100];

    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        cout << "Name of student " << i + 1 << ": ";
        getline(cin, name[i]);

        cout << "Score of student " << i + 1 << ": ";
        cin >> score[i];
        cin.ignore(); 
    }

    cout << "---------------------------------------------" << endl;
    cout << setw(25) << "Name"
         << setw(8) << "Score"
         << setw(8) << "Grade" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(25) << name[i]
             << setw(8) << score[i]
             << setw(8) << findGrade(score[i]) << endl;
    }

    cout << "---------------------------------------------" << endl;

    return 0;
}
