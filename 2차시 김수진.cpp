#include <iostream>

using namespace std;

void swap(int* x, int* y) {
	int temp = *x; 
	*x = *y; 
	*y = temp; 

}

int main() {
	// 1번
	short A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << A[4] << endl;

	// 2번
	char str1[10] = { 'H', 'I' , 'E', 'A', 'Z', 'L', 'T', 'L', 'U', 'O' };
	cout << str1[0] << str1[2] << str1[5] << str1[5] << str1[9] << endl;

	// 3번
	char str[6] = "Hello";
	char* p = str;

	// 3 - 1
	for (int i = 0; i < 6; i++)
	{
		cout << p[i];
	}
	cout << "\n";
	// 3 - 2	
	cout << p[0] << p[1] << p[2] << p[3] << p[4] << p[5] << endl;


	// 4번
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(a, b); //위에서 void swap으로 선언해두었던 곳에서 x와 y의 값이 바뀌도록 해두었기 때문에 단순히 그 곳에 a와 b를 대입하면 끝.
	cout << a << ", " << b << endl;




	return 0;
}