#include <iostream>

using namespace std;

void Permute(string word, int l, int r);

// https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

int main() {

	string value;
	cout << "Write any word" << endl << endl;
	cin >> value;

    int n = value.size();
    Permute(value, 0, n - 1);

	return 0;
}

void Permute(string word, int l, int r)
{
    // Base case
    if (l == r) {
        cout << word << endl;
    }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
            // Swapping done
            swap(word[l], word[i]);

            // Recursion called
            Permute(word, l + 1, r);

            //backtrack
            swap(word[l], word[i]);
        }
    }
}