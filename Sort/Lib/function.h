#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

template <typename T_t>
float timer(void(*funct)(T_t*, int), T_t* arr, int n);
template <typename T_t>
float timer(void(*funct)(T_t*, int, int), T_t* arr, int n);
int RunNumber(int arr[], int n);
int RunNumber(float arr[], int n);
void FillRand(int* A, int n);
void FillRand(float* A, int n);
void fillinc(int arr[], int N);
void filldeck(int arr[], int N);
void PrintMas(int arr[], int N);

void SelectSort(int arr[], int N);
void SelectSort(float arr[], int N);

void BubbleSort(int arr[], int N);
void BubbleSort(float arr[], int N);

void ShakerSort(int arr[], int n);
void ShakerSort(float arr[], int n);

void InsertSort(int arr[], int n);
void InsertSort(float arr[], int n);

void ShellSort(int arr[], int n);
void ShellSort(float arr[], int n);

void HeapSort(int arr[], int N);
void HeapSort(float arr[], int N);
void Create_New_Heap(int arr[], int key, int L, int R);
void Create_New_Heap(float arr[], float key, int L, int R);

void QuickSort(int arr[], int L, int R);
void QuickSort(float arr[], int L, int R);



