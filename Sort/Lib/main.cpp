#include "function.h"



int main()
{
    srand(time(NULL));
    int n;
    cout << "input size of array" << endl;
    cin >> n;
    int *arrayint = new int[n];
    float* arrayfloat = new float[n];
    printf("int Select %.7f\n", timer(SelectSort, arrayint, n));
    printf("float Select %.7f\n\n", timer(SelectSort, arrayfloat, n));
    printf("int Bubble %.7f\n", timer(BubbleSort, arrayint, n));
    printf("float Bubble %.7f\n\n", timer(BubbleSort, arrayfloat, n));
    printf("int Shaker %.7f\n", timer(ShakerSort, arrayint, n));
    printf("float Shaker %.7f\n\n", timer(ShakerSort, arrayfloat, n));
    printf("int Insert %.7f\n", timer(InsertSort, arrayint, n));
    printf("float Insert %.7f\n\n", timer(InsertSort, arrayfloat, n));
    printf("int Shell %.7f\n", timer(ShellSort, arrayint, n));
    printf("float Shell %.7f\n\n", timer(ShellSort, arrayfloat, n));
    printf("int Quick %.7f\n", timer(QuickSort, arrayint, n));
    printf("float Quick %.7f\n\n", timer(QuickSort, arrayfloat, n));
    printf("int Heap %.7f\n", timer(HeapSort, arrayint, n));
    printf("float Heap %.7f\n\n", timer(HeapSort, arrayfloat, n));
    
    
}

template <typename T_t>
float timer(void(*funct)(T_t*, int), T_t* arr, int n)
{
    clock_t a1, a2;
    FillRand(arr, n);
    a1 = clock();
    funct(arr, n);
    a2 = clock();
    
    int count = RunNumber(arr, n);
    if (count != 1 && count != n) 
    {
        cout << "sort is break  ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << count;
        abort();
    }
    
    return (float)(a2 - a1) / CLOCKS_PER_SEC;
}

template <typename T_t>
float timer(void(*funct)(T_t*, int, int), T_t* arr, int n)
{
    clock_t a1, a2;
    FillRand(arr, n);
    a1 = clock();
    funct(arr, 0, n-1);
    a2 = clock();
    int count = RunNumber(arr, n);
    
    if (count != 1) 
    {
        cout << "sort is break  ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << count;
        abort();
    }
   
    return (float)(a2 - a1) / CLOCKS_PER_SEC;
}

void FillRand(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 100;
    }
}
void FillRand(float* A, int n)
{
    for (int i = 0; i < n; i++){
        A[i] = static_cast<float>(rand()) / RAND_MAX;
    }
}