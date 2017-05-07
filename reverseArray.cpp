#include <iostream>

/*反转数组元素，算法分析：
1.当数组中的元素个数为偶数时，
使用最后一个元素的和数组的第0个元素进行交换，一次类推，
当所有的元素进行交换完毕之后，则完成了数组内元素的反转
2. 当数组内的元素个数为奇数时，和偶数处理思路一致，
中间的那个元素不用交换，继续保持原来的位置即可

坑：当使用C++进行算法刻意练习时，当main函数中需要调用的函数
没有在main函数之前进行定义时，并不能进行调用，编译器提示需要进行
函数的定义，在JS和Java中不会出现此问题，可能这个跟解析器解析方式不同
而导致的
*/
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

int* ReverseArrayByWhile(int *array,int size){
	int swap,left=0,right=size - 1;
	while(left < right){
		swap = array[left];
		array[left] = array[right];
		array[right] = swap;
		left++;
		right--;
	}
	return array;
}

void ReverseArrayByWhileNoReturn(int array[],int size){
	int swap,left=0,right=size - 1;
	while(left < right){
		swap = array[left];
		array[left] = array[right];
		array[right] = swap;
		left++;
		right--;
	}
}
//不需要返回数组的方法
void outputReverseByWhileNoReturn(){
	int array[] = {1,2,3,4,5,6,7};
	int SIZE = (sizeof(array)/sizeof(*array));
	ReverseArrayByWhileNoReturn(array,SIZE);
	std::cout<<std::endl;
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout<<array[i]<<' ';
	}
	std::cout<<std::endl;
}

//使用while循环的方式完成反转数组元素
void outputReverseByWhile(){
	int array[] = {1,2,3,4,5,6,7};
	int SIZE = (sizeof(array)/sizeof(*array));
	int *result = ReverseArrayByWhile(array,SIZE);
	std::cout<<std::endl;
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout<<array[i]<<' ';
	}
	std::cout<<std::endl;
}
//使用For循环的方式进行反转数组元素
void outputReverseByFor(){
	int array[] = {1,2,3,4,5,6,7};
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
}

int main(int argc, char const *argv[])
{
	outputReverseByWhile();
	outputReverseByFor();
	outputReverseByWhileNoReturn();
	return 0;
}