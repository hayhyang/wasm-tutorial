#include <iostream>
#include <string>

using namespace std;
class Multiple
{
public:
	void setGrades(int grades) {
		m_grades = grades;
		
	}
	void displayGrades() {
		for(int i = 1; i <= 9; i++)
		{
			cout << m_grades << " x " << i
			      << " = " << m_grades * i << endl;
		}
	}
private:
	int m_grades;
};

int main()
{
	Multiple multiple;
	multiple.setGrades(7);
	multiple.displayGrades();
	return 0;
}

