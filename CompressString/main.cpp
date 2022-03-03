#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

void WithMap();
void WithStruct();
void WithVector();


struct combos {
	char c;
	int i;
};

int main() {
	WithMap();
	WithStruct();
	WithVector();
	return 0;
}

void WithVector() {

	string value;
	cout << "Write any word" << endl << endl;
	cin >> value;

	vector<pair<char, int>> list;

	for (size_t i = 0; i < value.length(); i++)
	{
		char temp = value.at(i);
		int add = 0;

		for (size_t j = 1; j + i < value.length(); j++)
		{
			if (value.at(i + j) == temp) {
				add++;
			}
			else {
				break;
			}
		}

		list.push_back({ temp, add + 1 });
		i += add;
	}

	for (auto pair : list) {
		cout << pair.first << pair.second;
	}

	cout << endl << endl;

}

void WithStruct() {

	string value;
	cout << "Write any word" << endl << endl;
	cin >> value;

	vector<combos> list;

	for (unsigned int i = 0; i < value.length(); i++)
	{
		char temp = value.at(i);

		int add = 0;

		for (unsigned int j = 1; j + i < value.length(); j++)
		{
			if (value.at(i + j) == temp) {
				add++;
			}
			else {
				break;
			}
		}

		list.push_back({ temp, add + 1 });

		i += add;
	}

	for (auto combos : list) {
		cout << combos.c << combos.i;
	}

	cout << endl << endl;
}

void WithMap() {

	string value;
	cout << "Write any word" << endl << endl;
	cin >> value;

	unordered_multimap<char, int> map;

	for (unsigned int i = 0; i < value.length(); i++)
	{
		char temp = value.at(i);

		if (islower(temp)) {
			temp = toupper(temp);
		}		

		int add = 0;

		for (unsigned int j = 1; j + i < value.length(); j++)
		{
			if (toupper(value.at(i + j)) == temp) {
				add++;				
			}
			else {
				break;
			}
		}
				
		map.insert(pair<char, int>(temp, add +1));

		i += add;
	}

	for (unordered_multimap<char, int>::iterator it = map.begin(); it != map.end(); ++it) {
		cout << it->first << "\t" << it->second << endl;
	}

	cout << endl << endl;
}