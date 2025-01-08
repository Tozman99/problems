#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(string x, string t){
	reverse(t.begin(), t.end());
	return (x == t) ? true : false;
}

int main(void){

	string x, t;
	cin >> x;
	cin >> t;
	
	cout << "is Anagram : " << isAnagram(x, t);

	return 0;
}