# include<vector>
# include<algorithm>
# include<iostream>
# include<climits>
# include<cstdio>
# include<ctime>
# include<cstdlib>
# include<cmath>

using namespace std;

void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int *array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void merge(int *array, int l, int m, int r) {
    int i, j, k, nl, nr;

    nl = m - l + 1;
    nr = r - m;
    int larr[nl], rarr[nr];
    for (i = 0; i < nl; i++)
        larr[i] = array[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < nl && j < nr) {
        if (larr[i] <= rarr[j]) {
            array[k] = larr[i];
            i++;
        } else {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (i < nl) {
        array[k] = larr[i];
        i++;
        k++;
    }
    while (j < nr) {
        array[k] = rarr[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int l, int r) {
    int m;
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main() {

    int n;
    cout << "Enter the no of element:";
    cin >> n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    int arr4[n];
    int arr5[n];
    int arr6[n];
    int arr7[n];


    for (int i = 0; i < n; i++) {
        int randomNum = rand() % 10000 + 1;
        arr1[i] = randomNum;
        arr2[i] = randomNum;
        arr3[i] = randomNum;
        arr4[i] = randomNum;
        arr5[i] = randomNum;
        arr6[i] = randomNum;
        arr7[i] = randomNum;
    }
    mergeSort(arr1, 0, n - 1);
    display(arr1, n);

}