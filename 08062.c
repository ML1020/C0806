#include <stdio.h>
#include <stdlib.h>

int Search(int arr[], int n)
{
	int i;
	int num[256] = { 0 };
	for (i = 0; i<n ; i++)
	{
		num[arr[i]]++;
	}
	for (i = 0; i < n; i++)
	{
		if (num[arr[i]] == 1)
			return arr[i];
	}
	return 0;
}

int main()
{
	int arr[] = { 3, 2, 6, 3, 1, 9, 2, 6, 1 };
	int m = Search(arr, 9);
	printf("%d\n", m);
	system("pause");
	return 0;


}