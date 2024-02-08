#include <iomanip>
#include <iostream>

using namespace std;

static double CGPA(int grade[], const int subjects)
{
	double result = 0;
	for(auto i = 0; i < subjects; i++)
	{
		result += grade[i];
	}
	result = result / subjects;
	return result;
}

int main()
{
    int subjects_сount = 0;
	
	cout << "Write count of major subjects: ";
	cin >> subjects_сount;

	auto* grades = new int[subjects_сount];

	for(auto i = 0; i < subjects_сount; i++)
	{
		cout << "Write grade for subject " << i + 1 <<": ";
		cin >> grades[i];
	}

	const auto res = CGPA(grades, subjects_сount);

	cout << "Result is: " << res << endl;
}