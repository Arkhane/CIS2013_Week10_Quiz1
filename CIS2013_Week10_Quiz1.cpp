#include <iostream>
#include <string>

using namespace std;




int main()
{
	string userInput = "Something";
	char str_in;
	int bCounter;




	for (int i = 0; i < userInput.size; i++)
	{

		cout << "Enter a line..." << endl;
		cin >> userInput;

		bCounter++;
		if (userInput[i] == 'b')
		{
			if (bCounter % 2 == 0) {
				cout << "STANT";
			}
			else
			{
				cout << "SIT";
			}
		}
	}














	return 0;

}