#include <iostream>
#include <vector>
#include <map>

using namespace std;

void WithVector();
void WithMap();

template<typename K, typename V>
void print_map(std::map<K, V> const& m)
{
	for (auto const& pair : m) {
		std::cout << "{" << pair.first << ": " << pair.second << "}\n";
	}
}

int main() {
	WithMap();
	WithVector();
	return 0;
}

void WithMap(){

	string value;
	cout << "Write any word" << endl << endl;
	cin >> value;

	map<char, int> map;
	std::map<char, int>::iterator it;

	for (unsigned int i = 0; i < value.length(); i++)
	{
		char temp = value.at(i);

		if (islower(temp)) {
			temp = toupper(temp);
		}

		it = map.find(temp);

		if (it == map.end()) {
			map[temp] = 1;
		}
		else {
			int curValue = map[temp];
			map[temp] = curValue + 1;
		}
	}
	print_map(map);
	cout << endl << endl;
}

void WithVector() {
	string value;
	cout << "Write any word" << endl << endl;
	cin >> value;

	vector<char> list;
	vector<int> amounts;

	for (unsigned int i = 0; i < value.length(); i++)
	{
		char temp = value.at(i);

		if (islower(temp)) {
			temp = toupper(temp);
		}

		bool add = false;
		int index = 0;

		for (unsigned int j = 0; j < list.size(); j++)
		{
			if (temp == list[j]) {
				amounts[j]++;
				add = false;
				break;
			}
			else {
				add = true;
				index = j;
			}
		}

		if (add) {
			list.push_back(temp);
			amounts.push_back(1);
		}

		// for the first letter only
		if (list.size() == 0) {
			list.push_back(temp);
			amounts.push_back(1);
		}
	}

	for (unsigned int i = 0; i < list.size(); i++)
	{
		cout << list[i] << " = " << amounts[i] << endl;
	}

	cout << endl << endl;
}

