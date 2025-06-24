#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    string name;
    double mark;
    char grade;
};

void getdata(int size) {
    Student s[100];

    // Collecting student data
    for (int i = 0; i < size; i++) {
        cout << "Enter the ID of student " << i + 1 << ": ";
        cin >> s[i].id;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> s[i].name;
        cout << "Enter the mark of student " << i + 1 << ": ";
        cin >> s[i].mark;

        s[i].grade = (s[i].mark >= 50) ? 'P' : 'F';
    }

    // Writing to file
    ofstream myfile("struct.txt");
    if (!myfile) {
        cout << "Unable to open file for writing." << endl;
        return;
    }

    myfile << "ID\tName\tMark\tGrade\n";
    for (int i = 0; i < size; i++) {
        myfile << s[i].id << "\t" << s[i].name << "\t" << s[i].mark << "\t" << s[i].grade << "\n";
    }
    myfile.close();
    cout << "Data written to file successfully.\n";

    // Reading back from file
    ifstream file("struct.txt");
    if (!file) {
        cout << "Unable to open file for reading." << endl;
        return;
    }

    string line;
    cout << "\nContents of the file:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    int n;
    cout << "How many students are there? ";
    cin >> n;

    getdata(n);

    return 0;
}
