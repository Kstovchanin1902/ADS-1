// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int i = size/2, j, count = 0;
  while (i > 1 && i < (size-1)) {
        j = i;
        if (arr[i] == value) {
            count++;
            while (arr[i] == value) {
                i--;
                if (arr[i] == value) {
                    count++;
                }
            }
            while (arr[j] == value) {
                j++;
                if (arr[j] == value) {
                    count++;
                }
            }
            return count;
        } 
        else if (arr[i]<value) {
                 i = i + (size-i)/2;
            } else if (arr[i]>value) {
                        i = i - (size-i)/2;
                    }
        }
        return 0;
  return 0; // если ничего не найдено
}
