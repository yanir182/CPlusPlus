#pragma once

class Student
{
private:
	char* name;
	int* maks;
	int markCount;
	Student(const char* studentName, const int smarkCount, const int* studentMark);
	void createName(const char* studentName);
public:
	Student(const char* studentName, const int markCount, const int* studentMark)
	{

	}
	void Setname(const char* studentName);
	void Setmaks(int mark, int index);
	int getMark(int index);
	const char* getName();
	double srBall();
};

