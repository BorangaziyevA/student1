#include"schoolboy.h"
#include"student.h"
#include<vector>
#include"learners.h"

void main()
{
	learners p;

	p.addLearner(new schoolboy("A", 15));
	p.addLearner(new schoolboy("B", 14));
	p.addLearner(new student("C", 21));
	p.addLearner(new schoolboy("D", 18));
	p.addLearner(new student("E", 36));

	p.getAllStudents();
	cout << "\n\n\n\n";
	p.getAllSchoolboys();

	system("pause");
}