#include <iostream>
#include <string>
using namespace std;

class Exam {

private:
	char* studentName;
	char* examDate;
	int score;

public:
	Exam(const char* name, char* date, int score) {
		studentName = new char[strlen(name) + 1];
		strcpy(studentName, name);

		examDate = new char[strlen(date) + 1];
		strcpy(examDate, date);

		score = score;
	}

	void setstudentName(const char* name) {
		delete[] studentName;
		studentName = new char[strlen(name) + 1];
		strcpy(studentName, name);
	}
	void setexamDate(const char* date) {
		delete[] examDate;
		examDate = new char[strlen(date) + 1];
		strcpy(examDate, date);
	}
	void setscore(int sc) {
		score = sc;
	}
	void displayDetails()const {
		cout << "Student Name:" << studentName << endl;
		cout << "Exam Details:" << examDate << endl;
		cout << "Score:" << score << endl;
	}
};
int main() {
	Exam exam1("Neha", "24 - 7 - 12", 67);
	cout << "Details:" << endl;
	exam1.displayDetails();

	Exam exam2 = exam1;
	cout << "Details:" << endl;
	exam2.displayDetails();

	exam2.setstudentName("Zainab");
	exam2.setexamDate("21-5-23");
	exam2.setscore(45);

	cout << "Updated Details:" << endl;
	exam2.displayDetails();

	cout << "Exam 1 details:" << endl;
	exam1.displayDetails();
}