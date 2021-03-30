// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int j, count = 0, left=0, right = size;
     do {
        int i = (left + right)/2;
        j = i;
        cout<<"i = "<<i<<endl;
        if (arr[i] == value) {
            count++;
            cout<<"i = "<< i << endl;
            while (arr[i] == value) {
                i--;
                if (arr[i] == value) {
                    count++;
                    cout<<"i = "<<i<<", count = "<<count<<endl;
                }
            }
            while (arr[j] == value) {
                j++;
                if (arr[j] == value) {
                    count++;
                    cout<<"j = "<<j<<", count = "<<count<<endl;
                }
            }
            return count;
        } else if (arr[i] < value) {
                left = i+1;
            } else if (arr[i] > value) {
                        right = i - 1;
                    }
        }  while (left <= right);  
     return 0; // если ничего не найдено
}
