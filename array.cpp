#include <iostream>


int main(){
	
	int array[] = {5,4,10,1,7,9,2};
	std::cout << "Length of array = " << (sizeof(array)/sizeof(*array)) << std::endl;
	//随机访问特别快速访问   地址是确定的，访问时间复杂度为O(1)
	std::cout << array[4] << std::endl;
	std::cout << *(array + 4) << std::endl;
	return 0;
} 