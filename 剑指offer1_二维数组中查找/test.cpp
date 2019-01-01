#include<iostream>
#include<vector>

//��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳������
//�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������

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