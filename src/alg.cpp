// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0;
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == value) {
            count++;
        }
        left = (arr[mid] < value) ? mid + 1 : left;
        right = (arr[mid] > value) ? mid - 1 : right;
    }
    return count;
}
