#include<iostream>
#include<vector>

//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty()){
			return false;
		}
		else{
			int row = 0;
			int col = array[0].size() - 1;
			while (col >= 0 && row<array.size()){
				if (target == array[row][col]){
					return true;
				}
				else if (target>array[row][col]){
					row++;
				}
				else{
					col--;
				}
			}
			return false;
		}
	}
};

int main(){
	Solution s;
	int array[3][4] = {
		{1,3,5,6},
		{2,4,6,7},
		{4,6,8,10}
	};
	s.Find(7, array);
	system("pause");
	return 0;
}