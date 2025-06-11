#include<iostream>
using namespace std;

void replace(int c, string s, char a, char b)
{

	switch(c) {
	case 1 :
		for (int i = 0; i < s.length(); i++)
		{

			if(s[i]==a)
			{
				s[i] = b;
				cout << s;
				break;

			}

		}
		cout << endl << "-----------------------------------------------------------"<< endl;

		break;

	case 2:

		for (int i = 0; i < s.length(); i++)
		{

			if(s[i]==a)
			{
				s[i] = b;

			}
			cout << s[i];

		}
		cout << endl << "-----------------------------------------------------------"<< endl;

	}


}




int main()
{

	string s = "Hello World!";
	int i, choice;
	char a,b;



	cout << s;

	cout << "Enter 1 for replace One Charector."<< endl;
	cout << "Enter 2 for replace All Charector."<< endl;

	cout << "Enter your Choice : ";
	cin >> choice;
	cout << endl << endl;


	switch(choice)
	{
	case 1 :
		cout<< "Which Charector do you want to replace : ";
		cin >> a;
		cout << "Which Charector do you want to get replace : ";
		cin >> b;
		replace(choice,s,a,b);
		break;

	case 2 :
		cout<< "Which Charector do you want to replace : ";
		cin >> a;
		cout << "Which Charector do you want to get replace : ";
		cin >> b;
		replace(choice,s,a,b);
		break;

	}

	return 0;
}
