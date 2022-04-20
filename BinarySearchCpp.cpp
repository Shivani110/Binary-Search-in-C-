#include <iostream>
using namespace std;

int Binary_Search(int a[], int beg, int end, int b)
{
	if (end >= beg) {
		int mid = beg + (end - beg) / 2;
		if (a[mid] == b)
			return mid;
		if (a[mid] > b)
			return Binary_Search(a, beg, mid - 1, b);
		return Binary_Search(a, mid + 1, end, b);
	}

	return -1;
}

int main()
{
	int a[] = { 20,35,49,65,70 };
	int b = 49;
	int n = sizeof(a) / sizeof(a[0]);
	int r = Binary_Search(a, 0, n - 1, b);
	(r == -1)?
	 cout << "The element is not present in array":
     cout << "The element is present at index " << r;
	return 0;
} 

