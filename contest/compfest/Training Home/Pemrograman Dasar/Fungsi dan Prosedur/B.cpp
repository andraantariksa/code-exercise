#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

void swap(i32 *a, i32 *b){
    i32 temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    i32 N, arr[100];
    cin >> N;
    for (i32 i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i32 i = 0; i < N; i++)
    {
        for (i32 j = i + 1; j < N; j++)
        {
            if(arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
                cout << i + 1 << ' ' << j + 1 << '\n';
            }
        }
    }
}
