// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int count = 0;
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (arr[mid] == value) {
            count++;
            
            // Подсчет всех найденных элементов со значением value
            int i = mid - 1;
            while (i >= left && arr[i] == value) {
                count++;
                i--;
            }
            
            i = mid + 1;
            while (i <= right && arr[i] == value) {
                count++;
                i++;
            }
            
            break;
        }
        else if (arr[mid] < value) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return count;
}
