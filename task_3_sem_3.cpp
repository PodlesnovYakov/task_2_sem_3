#include <vector>
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int n;
	int temp = 0;
	cout << "Input size vector." << endl;
	cin >> n;
	vector<int> k(n);
	for (auto i = k.begin(); i != k.end(); i++) {
		cin >> (*i);
	}
	for (auto it = k.begin()+1; it != k.end(); it++) {
		if ((*it) * (*(it- 1)) < 0) temp++;
	}
	cout << temp << endl;
	
}

