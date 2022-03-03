#include <iostream>
#include <vector>
#include <list>
#include <forward_List>
#include "StringExcersise.h"
#include "StringFunctions.h"

using namespace std;

int main() {

	string email;
	cout << "Enter a email adress : ";
	cin >> email;
	cout << boolalpha;
	cout << ValidateEmail(email);



	/*string str;
	cout << "Enter a word with uppercases : ";
	cin >> str;
	UpperToLower(str);
	cout << str << endl;

	string str2;
	cout << "Enter a word with lowercases : ";
	cin >> str2;
	LowerToUpper(str2);
	cout << str2 << endl;*/


	/*char cstr[50] = "hello world";

	string str{ cstr };

	str[0] = 'g';

	cout << str << endl;
	printf("bla bla bla %s %d times \n", str.data(), 3);
	printf("bla bla bla %s %d times \n", str.data(), 3);


	str += "boom"s + cstr;
	cout << str << endl;

	str.append(" hallå ");
	cout << str << endl;*/



	/*list<int> numbers{ 1,2,3,4,5,6,7 };

	auto it = numbers.rbegin();
	auto it2 = numbers.begin();
	auto b = numbers.begin();
	auto e = numbers.end();

	for (auto it = numbers.rbegin(); it != numbers.rend(); it++)
	{
		cout << *it << " ";
	}

	while (it2 != numbers.end()) {
		cout << *it2++ << " ";
	}*/

	return 0;
}