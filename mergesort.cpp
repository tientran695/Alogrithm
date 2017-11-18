#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

void swap(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

void bubbleSort(double a[], int n)
{
	int swapped;
	do{
		swapped = 0;
		for (int i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1])
		{
			swap(a[i], a[i + 1]);
			swapped = 1;
		}
	} while (swapped == 1);
}

void insertionSort(double a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		double last = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > last)
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = last;
	}
}

int getNextGap(int gap)
{
	// Shrink gap by Shrink factor
	gap = (gap * 10) / 13;

	if (gap < 1)
		return 1;
	return gap;
}

void combSort(double a[], int n)
{
	// Initialize gap
	int gap = n;

	// Initialize swapped as true to make sure that
	// loop runs
	bool swapped = true;

	// Keep running while gap is more than 1 and last
	// iteration caused a swap
	while (gap != 1 || swapped == true)
	{
		// Find next gap
		gap = getNextGap(gap);

		// Initialize swapped as false so that we can
		// check if swap happened or not
		swapped = false;

		// Compare all elements with current gap
		for (int i = 0; i< n - gap; i++)
		{
			if (a[i] > a[i + gap])
			{
				swap(a[i], a[i + gap]);
				swapped = true;
			}
		}
	}
}

void CombSort(double* data, int count) {
	double gap = count;
	bool swaps = true;

	while (gap > 1 || swaps)
	{
		gap /= 1.247330950103979;

		if (gap < 1)
			gap = 1;

		int i = 0;
		swaps = false;

		while (i + gap < count)
		{
			int igap = i + (int)gap;

			if (data[i] > data[igap])
			{
				swap(data[i], data[igap]);
				swaps = true;
			}
			++i;
		}
	}
}

void merge(double a[], int L, int M, int R){
	// merge two sorted list a[L..M] and a[M +1.. R]
	int i = L;// first position of the first list a[L..M]
	int j = M + 1; // first position of the second list a[M +1.. R]
	double *TA;
	for (int k = L; k <= R; k++){
		if (i > M){ // the first list is all scanned
			TA[k] = a[j]; j++;
		}
		else if (j > R){ // the second list is all scanned
			TA[k] = a[i]; i++;
		}
		else {
			if (a[i] < a[j]){
				TA[k] = a[i]; i++;
			}
			else {
				TA[k] = a[j]; j++;
			}
		}
	}
	for (int k = L; k <= R; k++)
		a[k] = TA[k];
}

void merge_sort(double a[], int L, int R){
	if (L < R){
		int M = (L + R) / 2;
		merge_sort(a, L, M);
		merge_sort(a, M + 1, R);
		merge(a, L, M, R);
	}
}

void Merge(double a[], int left, int mid, int right);

// left, right la bien trai va bien phai cua mang
void MergeSort(double a[], int left, int right)
{
	if (right > left)
	{
		int mid; // Phan tu o giua
		mid = (left + right) / 2;
		MergeSort(a, left, mid); // Goi de quy mang con ben trai
		MergeSort(a, mid + 1, right); // Goi de quy mang con ben phai
		Merge(a, left, mid, right); // Goi ham so sanh hai mang con
	}
}

void Merge(double a[], int left, int mid, int right)
{
	double *temp; // Khoi tao mang tam de sap xep
	int i = left; // Vi tri phan tu dau tien cua mang con ben trai
	int j = mid + 1; // Vi tri phan tu dau tien cua mang con ben phai

	temp = new double[right - left + 1]; // Khoi tao so luong phan tu cua mang tam

	for (int k = 0; k <= right - left; k++)
	{
		// Kiem phan tu cua mang con ben trai va ben phai
		if (a[i] < a[j])
		{
			// Neu a[i] < a[j] thi copy phan tu ben trai vao mang tam
			temp[k] = a[i];
			i++; // Vi tri phan tu tiep theo cua mang
		}
		else // Nguoc lai copy phan tu cua mang con ben phai vao mang tam
		{
			temp[k] = a[j];
			j++; // Vi tri phan tu tiep theo cua mang
		}

		// Kiem tra mang con ben trai con phan tu nao khong
		if (i == mid + 1)
		{
			// Nguoc lai dua cac phan tu con lai cua mang con ben phai vao mang tam
			while (j <= right)
			{
				k++;
				temp[k] = a[j];
				j++;
			}
			break;
		}

		// Kiem tra mang con ben phai con phan tu nao khong
		if (j == right + 1)
		{
			// Nguoc lai dua cac phan tu con lai cua mang con ben phai vao mang tam
			while (i <= mid)
			{
				k++;
				temp[k] = a[i];
				i++;
			}
			break;
		}
	}

	for (int k = 0; k <= right - left; k++) // Chep mang tam vao mang chinh
		a[left + k] = temp[k];
	delete temp;
}

int partition(double a[], int L, int R, int pivotIndx)
{
	double pivot = a[pivotIndx];
	int storeIndx = L;
	swap(a[pivotIndx], a[R]);
	//Dich chuyen cac phan tu nho hon pivot ve dau day
	for (int i = L; i <= R - 1; i++)
	{
		if (a[i] < pivot)
		{
			swap(a[i], a[storeIndx]);
			storeIndx++;
		}
	}
	swap(a[R], a[storeIndx]);
	return storeIndx;
}

void quickSort(double a[], int L, int R)
{
	if (L < R)
	{
		int indx = (L + R) / 2;
		indx = partition(a, L, R, indx);
		if (L < indx)
			quickSort(a, L, indx - 1);
		if (indx < R)
			quickSort(a, indx + 1, R);
	}
}

double read()
{
	bool checkDau = false;
	double var = 0;
	while (true)
	{
		int ch = getchar();
		if (ch == '-')
		{
			checkDau = true;
			continue;
		}
		if (ch == '.')
			continue;
		if (ch >= '0' && ch <= '9')
			var = var * 10 + (ch - '0');
		if ((ch == ' ') || (ch == -1))
			break;
	}
	if (checkDau)
		var = -var;
	return var / 100;
}

int main()
{
	int n;
	freopen("data.inp", "r", stdin);
	cin >> n;
	getchar(); //doc ky tu xuong dong
	double *A = new double[n];
	for (int i = 0; i < n; i++)
		A[i] = read();
	//quickSort(A, 0, n - 1);
	//CombSort(A, n);
	for (int i = 0; i < n; i++)
		printf("%.2f ", A[i]);
	return 0;
}