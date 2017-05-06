#include <iostream>

//翻转数组元素
int* ReverseArray(int *array,unsigned short size){
	
	int swap;
	for (int a=0; a < --size; a++)
	{
		swap = array[a];
		array[a] = array[size];
		array[size] = swap;
	}
	return array;
}

int main(int argc, char const *argv[])
{
	int array[] = {5,4,10,1,7,9,2};
	int SIZE = (sizeof(array)/sizeof(*array));
	std::cout << "Before reverse the array is :";
	int *arr = array;
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout<<arr[i]<<' ';
	}
	std::cout<<std::endl;

	arr = ReverseArray(arr,SIZE);
	std::cout << "After reverse the array is :";
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout<<arr[i]<<' ';
	}
	std::cout<<std::endl;
	

	return 0;
}