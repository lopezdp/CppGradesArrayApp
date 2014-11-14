#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void PopulateArray(int grades);
//bool Pass();

//declare variables & constants
const int ARRAY_SIZE = 100;
int grades;
int quizzes[ARRAY_SIZE];

int main()
{

	PopulateArray(grades);

	for (int i = 0; i < 100; i++)
		cout << quizzes[i];

	system("pause");
	return 0;
}

void PopulateArray(int grades)
{
  //Specifies different seed time values for the rand() each time the program is run
	srand(time(0));
	//initialize every component of the array with a random grade for each quiz
	for (int i = 0; i < 100; i++)
		quizzes[i] = rand() % 100;
}

/*bool Pass()
{

}*/
