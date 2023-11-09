/* #include <iostream>


int main()
{
	char X;
	printf("Enter a character:");
	cin>>("%c", &X);
	if (X >= 'a' && X <= 'z') {
		X = X + 32;
		printf("Converted character to lowercase: %c", &X);

	}
	else if (X >= 'A' && X <= 'Z')
	{
		X = X - 32;
		printf("Converted character to lowercase: %c", &X);
	}



} */



#include <iostream>
using namespace std;
int main()
{

	char a[20];
	int i = 0;
	cout << "Enter a character: \n";
	cin >> a;
	for (; a[i]; i++)
	{

		if (a[i] >= 'a' && a[i] <= 'z')

			a[i] -= 32;

		else if (a[i] >= 'A' && a[i] <= 'Z')

			a[i] += 32;

	}

	for (i = 0; a[i]; i++)

		cout << a[i];

	cout << endl;


	return 0;

}