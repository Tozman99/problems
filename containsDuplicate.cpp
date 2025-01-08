#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isDuplicated(vector<int>nums){
	sort(nums.begin(), nums.end());
	return std::adjacent_find(nums.begin(), nums.end()) != nums.end();
	
}

int main(void){

	vector<int> nums;
	int elem;
	while(cin >> elem){
		nums.push_back(elem);
	}
	cout << "has duplicate : " << isDuplicated(nums);

	return 0;
}