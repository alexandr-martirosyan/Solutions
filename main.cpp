#include <iostream>

using namespace std;

void printArr(const int *arr, int size);
void swapNums(int &num1, int &num2);
int binarySearchRecursive(const int *arr, int num, int l, int r);
int *bubbleSortArray(int *arr, int size, bool createNew);
int *exercise1(const int *arr, int size);
int exercise2(int num);
int exercise3(int num);
int exercise4(int start, int end);
int exercise5_iterative(const int *arr, int size, int num);
int exercise5_recursive(const int *arr, int size, int num);
int exercise6(const int *arr, int size);
int exercise7();
int exercise8();
int exercise8_withoutFormula();
int *exercise9(int *arr, int size);
bool exercise10(int num);

int main() {
    int size = 7;
    int arr[] = {15, 1, -5, 7, 3, -10, 1};
    int *sortedArr = bubbleSortArray(arr, size, true);

    int *newArr;
    int num, start, end;

    cout << "____________________________________________________________" << endl;
    cout << "Exercise1" << endl;
    cout << "Array is  -> ";
    printArr(arr, size);
    cout << "Result is -> ";
    newArr = exercise1(arr, size);
    printArr(newArr, size);
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise2" << endl;
    num = 4638;
    cout << "Number is -> " << num << endl;
    cout << "Result is -> " << exercise2(num) << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise3" << endl;
    num = 4638;
    cout << "Number is -> " << num << endl;
    cout << "Result is -> " << exercise3(num) << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise4" << endl;
    start = -3;
    end = 10;
    cout << "start is  -> " << start << endl;
    cout << "end is    -> " << end << endl;
    cout << "Result is -> " << exercise4(start, end) << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise5" << endl;
    cout << "Array is -> ";
    printArr(sortedArr, size);
    num = -100;
    cout << "num is -> " << num << endl;
    cout << "Iterative result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "Recursive result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 100;
    cout << "num is -> " << num << endl;
    cout << "Iterative result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "Recursive result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = -10;
    cout << "num is -> " << num << endl;
    cout << "Iterative result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "Recursive result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 15;
    cout << "num is -> " << num << endl;
    cout << "Iterative result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "Recursive result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 3;
    cout << "num is -> " << num << endl;
    cout << "Iterative result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "Recursive result is -> " << exercise5_iterative(sortedArr, size, num) << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise6" << endl;
    cout << "Array is -> ";
    printArr(arr, size);
    cout << "Result is -> " << exercise6(arr, size) << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise7" << endl;
    cout << "Result is -> " << exercise7() << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise8" << endl;
    cout << "Result with using formula is    -> " << exercise8() << endl;
    cout << "Result without using formula is -> " << exercise8_withoutFormula() << endl;
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise9" << endl;
    cout << "Array is                -> ";
    printArr(arr, size);
    cout << "Result(sorted array) is -> ";
    exercise9(arr, size);
    printArr(arr, size);
    cout << "____________________________________________________________" << endl << endl;
    cout << "____________________________________________________________" << endl;
    cout << "Exercise10" << endl;
    num = -10;
    cout << "num is -> " << num << endl;
    cout << "Result is -> " << exercise10(num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 0;
    cout << "num is -> " << num << endl;
    cout << "Result is -> " << exercise10(num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 1;
    cout << "num is -> " << num << endl;
    cout << "Result is -> " << exercise10(num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 8;
    cout << "num is -> " << num << endl;
    cout << "Result is -> " << exercise10(num) << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    num = 10;
    cout << "num is -> " << num << endl;
    cout << "Result is -> " << exercise10(num) << endl;
    cout << "____________________________________________________________" << endl << endl;
    return 0;
}

int *exercise1(const int *arr, const int size) {
    int *newArr = new int[size];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i] * arr[i];
    }
    return bubbleSortArray(newArr, size, false);
}

int exercise2(int num) {
    if (num <= 0) {
        return 0;
    }
    int sum = 0;
    for (; num > 0; num /= 10) {
        sum += num % 10;
    }
    return sum;
}

int exercise3(int num) {
    if (num <= 0) {
        return 0;
    }
    int sum = 0;
    int product = 1;
    for (; num > 0; num /= 10) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
    }
    return product - sum;
}

int exercise4(int start, int end) {
    if (start % 2 == 0) {
        ++start;
    }
    if (end % 2 != 0) {
        ++end;
    }
    int count = 0;
    for (int i = start; i < end; i += 2) {
        ++count;
    }
    return count;
}

int exercise5_iterative(const int *arr, const int size, const int num) {
    int l = 0;
    int r = size - 1;
    while (l <= r) {
        int ind = (l + r) / 2;
        int item = arr[ind];
        if (num == item) {
            return ind;
        }
        num < item ? r = ind - 1 : l = ind + 1;
    }
    return -1;
}

int exercise5_recursive(const int *arr, const int size, const int num) {
    int l = 0;
    int r = size - 1;
    return binarySearchRecursive(arr, num, l, r);
}

int exercise6(const int *arr, const int size) {
    int count = 0;
    // i starts from 1 because of division by zero
    for (int i = 1; i < size; ++i) {
        if (arr[i] % i == 0) {
            ++count;
        }
    }
    return count;
}

int exercise7() {
    const int limit = 4000001;
    int a = 2;
    int b = 3;
    int c = 5;
    int sum = 0;
    while (a < limit) {
        sum += a;
        a = b + c;
        b = c + a;
        c = a + b;
    }
    return sum;
}

int exercise8() {
    const int limit = 100;
    int sum = limit * (limit + 1) / 2;
    int sqrSum = limit * (limit + 1) * (2 * limit + 1) / 6;

    return sum * sum - sqrSum;
}

int exercise8_withoutFormula() {
    const int limit = 101;
    int sum = 0;
    int sqrSum = 0;
    for (int i = 0; i < limit; ++i) {
        sum += i;
        sqrSum += i * i;
    }
    return sum * sum - sqrSum;
}

int *exercise9(int *arr, int size) {
    return bubbleSortArray(arr, size, false);
}

bool exercise10(const int num) {
    if (num < 1) {
        return false;
    }
    int pow = 1;
    while (pow < num) {
        pow <<= 1;
    }
    return pow == num;
}

int binarySearchRecursive(const int *arr, const int num, int l, int r) {
    if (l > r) {
        return -1;
    }
    int ind = (l + r) / 2;
    int item = arr[ind];
    if (num == item) {
        return ind;
    }
    num < item ? r = ind - 1 : l = ind + 1;
    return binarySearchRecursive(arr, num, l, r);
}

int *bubbleSortArray(int *arr, int size, const bool createNew) {
    int *sortedArr;
    if (createNew) {
        sortedArr = new int[size];
        for (int i = 0; i < size; ++i) {
            sortedArr[i] = arr[i];
        }
    } else {
        sortedArr = arr;
    }
    int sizeSub1 = size - 1;
    for (int i = 0; i < sizeSub1; ++i) {
        bool wasChanged = false;
        for (int j = 0; j < sizeSub1 - i; ++j) {
            if (sortedArr[j] > sortedArr[j + 1]) {
                swapNums(sortedArr[j], sortedArr[j + 1]);
                wasChanged = true;
            }
        }
        if (!wasChanged) {
            return sortedArr;
        }
    }
    return sortedArr;
}

void swapNums(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void printArr(const int *arr, const int size) {
    cout << "[";
    for (int i = 0; i < size - 1; ++i) {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1] << "]" << endl;
}