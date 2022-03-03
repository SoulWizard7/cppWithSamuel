
#include <iostream>
#include <string>
#include <vector>
#include "StringFunctions.h"

#define dot 46

using namespace std;


string UpperToLower(string& s) {
	auto it = s.begin();
	while (it != s.end()) {
		if ((int)*it >= 65 && (int)*it <= 90) {
			*it += 32;
		}
		it++;
	}
	return s;
}

string LowerToUpper(string& s) {
	auto it = s.begin();
	while (it != s.end()) {
		if ((int)*it >= 97 && (int)*it <= 122) {
			*it -= 32;
		}
		it++;
	}
	return s;
}


bool ValidateEmail(string &s) {

	if (s.length() < 5) return false;

	vector<string> parts;
	bool mustHaveAtSign = false;
	bool mustHaveDot = false;
	vector<int> nonAllowed = { 34, 40, 41, 44, 58, 59, 60, 62, 64, 91, 93, 127 };

	for (size_t i = 0; i < s.length(); i++)
	{
		if ((int)s.at(i) == 64) {
			parts.push_back(s.substr(0, i));
			parts.push_back(s.substr(i + 1, s.length()));

			if ((int)parts[0].at(0) == dot) {
				cout << "1";
				return false;
			} // starts with dot
			if ((int)parts[0].at(i-1) == dot) {
				cout << "2";
				return false;
			} // ends with dot
			if ((int)parts[1].at(0) == dot) {
				cout << "3";
				return false;
			} // starts with dot
			if ((int)parts[1].at(s.length() - i - 2) == dot) {
				cout << "4";
				return false;
			} // ends with dot

			mustHaveAtSign = true;
			continue;
		}

		for (size_t j = 0; j < nonAllowed.size(); j++)
		{
			if ((int)s.at(i) == nonAllowed[j]) {
				cout << s.at(i);
				return false;
			}
		}

		if ((int)s.at(i) == dot) {
			if ((int)s.at(i + 1) == dot) {
				cout << s.at(i + 1);
				return false;
			}

			if (mustHaveAtSign) {
				mustHaveDot = true;
			}
		}
	}

	if (!mustHaveAtSign) { 
		cout << "must have @";
		return false; 
	}
	
	if ((int)parts[0].at(0) == dot) return false; // starts with dot
	if ((int)parts[0].at(parts[0].length() - 1) == dot) return false; // ends with dot
	
	if ((int)parts[1].at(0) == dot) return false; // starts with dot
	if ((int)parts[1].at(parts[1].length() - 1) == dot) return false; // ends with dot

	if (mustHaveDot) {
		parts.clear();
		parts.shrink_to_fit();
		return true;
	}
	else {
		cout << "must have .";
		return false;
	}
}
