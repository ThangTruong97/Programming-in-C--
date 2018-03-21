#include<conio.h>
#include<iostream>
using namespace std;
#include<vector>

void quickSort(vector <int>&, int, int,int);
int n;
int findMedium(vector <int>, int,int);

void main()
{
	int choice;
	cout << "Nhap vao so phan tu : ";
	cin >> n;
	vector<int>numbers(n);

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu thu " << i + 1 << " : ";
		cin >> numbers[i];
	}

	cout << "Nhap lua chon : chon so trung binh (nhan 0) hay so trung vi (nhan 1) : " ;
	cin >> choice;
	quickSort(numbers, 0, n - 1,choice);
	cout << "Mang sau khi da sap xep la : ";
	for (int j = 0; j < n; j++)
	{
		cout << numbers[j] << " ";
	}
	_getch();
}

void quickSort(vector<int>& a, int left, int right,int chon)
{
	int i, j, x, temp,dem=0;
	if (chon == 0)
	{
		int sum = 0;
		for (int k = left; k <= right; k++)
		{
			sum += a[k];
			dem++;
		}
		x = sum / dem;
	}
	else
	{
		x = findMedium(a, left,right);
	//x = a[(left + right) / 2];
		
	}
	i = left;
	j = right;
	while (i < j)
	{
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		if (left < j)
			quickSort(a, left, j,chon);
		if (i < right)
			quickSort(a, i, right,chon);
	}
}

int findMedium(vector <int>a,int left,int right)
{
	int i, j, temp,Medium;
	for (i = left; i < right; i++)
		for (j = i + 1; j <=right;j++)
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	Medium = a[(left+right) / 2];
	return Medium;
}