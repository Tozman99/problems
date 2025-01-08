#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> TwoSum(vector<int>& nums, int target){
        int digits2;
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++){
        auto it = find(nums.begin(), nums.end(), (target - nums[i]));
        int index = distance(nums.begin(), it);
          if(it != nums.end() && i != index){
                arr.push_back(i);
                arr.push_back(index);
                break;
            }
        }
	    return arr;
	
}

int main(void){

	vector<int> nums;
	int target;
	int elem;

	while(cin.peek() != '\n' && cin >> elem){
		nums.push_back(elem);
	}
	cin.ignore();
	cin >> target;

	vector<int> it = TwoSum(nums, target);
	cout << it[0] << " " << it[1];
	TwoSum(nums, target);
	return 0;
}