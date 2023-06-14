#include "function.h"

void fillinc(int arr[], int N){
    for (int i=1;i<N;i++){
        arr[i] = i;
    }
}

void filldeck(int arr[], int N){
    for (int i=N,n=0;i>0;i--){
        arr[n] = i-1;
        n++;
    }
}

int RunNumber(int arr[], int n)
{
    int count = 1;
    int m = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1]) {
            count++;
        }
        if (arr[i] == arr[i + 1]) {
            m++;
        }
    }
    if (count != 1) {
        return count + m;
    }
    else {
        return count;
    }

}

int RunNumber(float arr[], int n) 
{
    int count = 1;
    int m = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1]) {
            count++;
        }
        if (arr[i] == arr[i + 1]) {
            m++;
        }
    }
    if (count != 1) {
        return count + m;
    }
    else {
        return count;
    }
}

void PrintMas(int arr[], int N){
    for (int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectSort(int arr[], int N)
{
    int t,n,i,j;
    for(i=0;i<N;i++){
        n=i;
        for(j=i+1;j<N;j++){
            if(arr[j]<arr[n]){
                n=j;
            }
        }
        t = arr[i];
        arr[i] = arr[n];
        arr[n] = t;
        n++;
    }
}

void SelectSort(float arr[], int N)
{
    int n, i, j;
    float t;
    for (i = 0; i < N; i++) {
        n = i;
        for (j = i + 1; j < N; j++) {
            if (arr[j] < arr[n]) {
                n = j;
            }
        }
        t = arr[i];
        arr[i] = arr[n];
        arr[n] = t;
        n++;
    }
}

void BubbleSort(int arr[], int N)
{
    int i,j,temp;
    for (i=0; i < N-1; i++)
    {
        for (j=N-1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

void BubbleSort(float arr[], int N)
{
    int i, j;
    float temp;
    for (i = 0; i < N - 1; i++)
    {
        for (j = N - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void ShakerSort(int arr[], int n)
{
    int L,R,k,temp;
    L = 0, R = n-1, k = n-1;
    do{
        for (int i = R; i > L; i--)
        {
            temp = 0;
            if (arr[i] < arr[i-1]){
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp; 
                k = i;
            }
        }
        L = k;
        for (int i = L; i < R; i++)
        {   
            temp = 0;
            if (arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                k = i; 
            }
        }
        R = k;
    }while(L < R);
}

void ShakerSort(float arr[], int n)
{
    int L, R, k;
    float temp;
    L = 0, R = n - 1, k = n - 1;
    do {
        for (int i = R; i > L; i--)
        {
            temp = 0;
            if (arr[i] < arr[i - 1]) {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                k = i;
            }
        }
        L = k;
        for (int i = L; i < R; i++)
        {
            temp = 0;
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                k = i;
            }
        }
        R = k;
    } while (L < R);
}

void InsertSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void InsertSort(float arr[], int n)
{
    int i, j;
    float key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void ShellSort(int arr[], int n)
{
    // кнут
    int m = log2(n)-1;
    int* knut = new int[m];
    knut[0] = 1;
    for (int i = 1; i < m; i++)
    {
        knut[i] = knut[i - 1] * 2 + 1;
    }
    int temp,j,interval,r;
    r = 0;
    bool flag = 0;
    for (r=m; r > 0; r--)
    {
        interval = knut[r-1];
        for (int i = interval; i < n; i++)
        {   
            flag = 0;
            temp = arr[i];

            for (j = i; (j >= interval) && (arr[j - interval] > temp); j -= interval){
                arr[j] = arr[j - interval];
                flag = 1;
            }
            arr[j] = temp;
        }
    }
}

void ShellSort(float arr[], int n)
{
    // кнут
    int m = log2(n) - 1;
    int* knut = new int[m];
    knut[0] = 1;
    for (int i = 1; i < m; i++)  knut[i] = knut[i - 1] * 2 + 1;

    int j, interval, r;
    float temp;
    r = 0;
    bool flag = 0;
    for (r = m; r > 0; r--)
    {
        interval = knut[r - 1];
        for (int i = interval; i < n; i++)
        {
            flag = 0;
            temp = arr[i];

            for (j = i; (j >= interval) && (arr[j - interval] > temp); j -= interval) {
                arr[j] = arr[j - interval];
                flag = 1;
            }
            arr[j] = temp;
        }
    }
}

void HeapSort(int arr[], int N)
{
    int L = N/2;
    while(L > 0)
    {
        Create_New_Heap(arr,arr[L-1],L,N-1);
        L--;
    }
    int R = N - 1;
    while (R > 0)
    {
        swap(arr[0],arr[R]);
        R--;
        Create_New_Heap(arr,arr[L],L+1,R);
    }
}

void HeapSort(float arr[], int N)
{
    int L = N / 2;
    while (L > 0)
    {
        Create_New_Heap(arr, arr[L - 1], L, N - 1);
        L--;
    }
    int R = N - 1;
    while (R > 0)
    {
        swap(arr[0], arr[R]);
        R--;
        Create_New_Heap(arr, arr[L], L + 1, R);
    }
}

void Create_New_Heap(int arr[], int key, int L, int R)
{
    bool flag = 1;
    int i = L-1;
    int x = key;
    while(flag == 1)
    {
        int j = (2*i)+1;
        if (j > R){
            break;
        }
        if (j < R && arr[j+1] <= arr[j]){
            j++;
        }
        if (x <= arr[j]){
            break;
        }
        arr[i] = arr[j];
        i = j;  
    }
    arr[i] = key;
}

void Create_New_Heap(float arr[], float key, int L, int R)
{
    bool flag = 1;
    int i = L - 1;
    float x = key;
    while (flag == 1)
    {
        int j = (2 * i) + 1;
        if (j > R) {
            break;
        }
        if (j < R && arr[j + 1] <= arr[j]) {
            j++;
        }
        if (x <= arr[j]) {
            break;
        }
        arr[i] = arr[j];
        i = j;
    }
    arr[i] = key;
}

void QuickSort(int arr[], int L, int R)
{
    int i = L, j = R;
    int key = arr[(L + R) / 2];
    while (i <= j)
    {
        while (arr[i] < key)    i++;
        while (arr[j] > key)    j--;

        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (L < j) {
        QuickSort(arr, L, j);
    }
    if (i < R) {
        QuickSort(arr, i, R);
    }
}

void QuickSort(float arr[], int L, int R)
{
    int i = L, j = R;
    float key = arr[(L + R) / 2];
    while (i <= j)
    {
        while (arr[i] < key)    i++;
        while (arr[j] > key)    j--;

        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (L < j) {
        QuickSort(arr, L, j);
    }
    if (i < R) {
        QuickSort(arr, i, R);
    }
}
