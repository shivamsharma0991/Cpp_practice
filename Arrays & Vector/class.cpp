#include <bits/stdc++.h>
using namespace std;

int sqRoot(int n) {
    int i = 1;
    while (i * i <= n) {
        i++;
    }
    return i - 1;
}

int missNo(int n, int arr[]) {
    int s = (n * (n - 1)) / 2;
    int arrs = 0;
    for (int i = 0; i < n; i++) {
        arrs += arr[i];
    }
    return s - arrs;
}

int pro(int arr[], int n) {
    int c = abs(arr[0]);
    int d = abs(arr[0]);

    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > c) {
            d = c;
            c = abs(arr[i]);
        } else if (abs(arr[i]) > d) {
            d = abs(arr[i]);
        }
    }

    return c * d;
}

int addMatr(int n1, int arr1[][100], int arr2[][100]) {
    int arrs1[100][100];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            arrs1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return 0;
}