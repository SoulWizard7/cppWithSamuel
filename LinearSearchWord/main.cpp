#include <iostream>
#include <string>
#include <vector>

using namespace std;

void SearchByChar();
void SearchByWord();

int main() {

	SearchByChar();
	SearchByWord();

	return 0;
}

void SearchByWord() {

	string sentence = "Hello my name is Ada";

	// separate sentence to words
	vector<string> words;
	vector<char> chars;

	for (unsigned int i = 0; i < sentence.length(); i++)
	{
		if (isspace(sentence.at(i))) {
			string word(chars.begin(), chars.end());
			words.push_back(word);
			chars.clear();
		}
		else {
			chars.push_back(sentence.at(i));
		}

		if (i == sentence.length()) {
			string word(chars.begin(), chars.end());
			words.push_back(word);
		}
	}

	// get input
	string value;
	cout << sentence << endl << endl;
	cout << "write a word from the sentence above" << endl << endl;
	cin >> value;

	// search for word in vector
	bool foundWord = false;
	for (unsigned int i = 0; i < words.size(); i++)
	{
		if (words[i].compare(value)) {
			foundWord = true;
		}
	}

	if (foundWord) {
		cout << "The sentence contains the word '" << value << "'" << endl;
	}
	else {
		cout << "The sentence DOES NOT contain the word '" << value << "'" << endl;
	}
}

void SearchByChar() {

	string sentence = "Hello my name is Ada";

	string value;
	cout << sentence << endl << endl;
	cout << "write a word from the sentence above" << endl << endl;
	cin >> value;
	bool foundWord = false;

	for (unsigned int i = 0; i < sentence.length(); i++)
	{
		if (sentence.at(i) == value.at(0)) {

			for (unsigned int j = 1; j < value.length(); j++)
			{
				if (sentence.at(i + j) == value.at(j)) {
					if (j == value.length() - 1) {
						foundWord = true;
						break;
					}
				}
				else {
					break;
				}
			}
		}

		if (foundWord) {
			break;
		}
	}

	if (foundWord) {
		cout << "The sentence contains the word '" << value << "'" << endl;
	}
	else {
		cout << "The sentence DOES NOT contain the word '" << value << "'" << endl;
	}
}