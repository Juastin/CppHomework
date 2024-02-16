#include "Pointers.h"

void ChangeIndex() 
{
	int* p;			// integer pointer p
	int a[10];		// integer array size 10
	p = a;			// p now points to first item in array a
	
	*a = 12;		// a[0] is now 12; shallow copy
	*(a + 2) = 24;	// a[2] is now 24;

}

void ShallowandDeepCopy()
{
	int arr[] = { 1,2,3,4,5 };
	int* p = arr;				// Shallow copy, the p now only references to the array.

	for (int i = 0; i < 5; i++)
		p[i] = arr[i];			// Deep copy, the complete contents are copied one by one.
								// If arr[] gets deleted or removed, p will still work.
}
