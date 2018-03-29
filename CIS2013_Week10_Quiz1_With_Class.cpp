#include <iostream>
#include <string>

using namespace std;




int main()
{
	string sentence;
	int cnt = 0;

	cout << "Type your sentence: " << endl;
	getline(cin, sentence);

	for (int i = 0; i <= sentence.length(); i++)
	{
		if (sentence[i] == 'b')
		{
			cnt++;
			if (cnt % 2 == 0) {
				cout << "STAND";
			}
			else
			{
				cout << "SIT";
			}
		}
		cout << sentence[i];
	}







	return 0;

}