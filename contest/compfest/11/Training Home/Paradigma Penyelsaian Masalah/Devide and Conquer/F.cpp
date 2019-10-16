#include <bits/stdc++.h>
using namespace std;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long int i64;
typedef unsigned long int u64;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    i32 N, Q, b;
    scanf("%d %d", &N, &Q);
    int B[100000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < Q; i++) {
        scanf("%d", &b);
        if(binarySearch(B, 0, N, b) != -1) {
            printf("ada\n");
        }else{
            printf("tidak ada\n");
        }
    }
}


