#include <iostream>
using namespace std;

int* insertion(int n, int arr[],
			int num, int index)
{
	int i;
	n++;
	for (i = n; i >= index; i--)
		arr[i] = arr[i - 1];
	arr[index - 1] = num;

	return arr;
}

// Driver Code
int main()
{
	int arr[100] = { 1,2,3,4,5,6 };
	int i, num, index, n = 6;
    cout<<"Enter Index :";
    cin>>index;
    cout<<"Enter Number :";
    cin>>num;
	insertion(n, arr, num, index);
	for (i = 0; i < n + 1; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
