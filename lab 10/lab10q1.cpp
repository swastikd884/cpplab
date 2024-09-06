#include <iostream>
using namespace std;

template <class T>
T max(const T *data, int size)
{
    T result = data[0];
    for (int i = 1; i < size; i++)
        if (result < data[i])
            result = data[i];
    return result;
}

template <class T>
T min(const T *data, int size)
{
    T result = data[0];
    for (int i = 1; i < size; i++)
        if (result > data[i])
            result = data[i];
    return result;
}

template <typename T>
T total(T const *t, int n)
{
    T s = t[n - 1];
    for (int i = 0; i < (n - 1); i++)
        s += t[i];
    return s;
}

template <typename T>
T average(T const *t, int n)
{
    T s = t[n - 1];
    for (int i = 0; i < (n - 1); i++)
        s += t[i];
    return s / n;
}

int main()
{
    double data[] = {1.5, 4.6, 3.1, 1.1, 3.8, 2.1};
    int numbers[] = {2, 22, 4, 6, 122, 12, 1, 45};

    const int dataSize = sizeof data / sizeof data[0];
    cout << "Minimum double is " << min(data, dataSize) << endl;
    cout << "Maximum double is " << max(data, dataSize) << endl;
    cout << "Total double is " << total(data, dataSize) << endl;
    cout << "Average double is " << average(data, dataSize) << endl;

    const int numbersSize = sizeof numbers / sizeof numbers[0];
    cout << "Minimum integer is " << min(numbers, numbersSize) << endl;
    cout << "Maximum integer is " << max(numbers, numbersSize) << endl;
    cout << "Total integer is " << total(numbers, numbersSize) << endl;
    cout << "Average integer is " << average(numbers, numbersSize) << endl;

    return 0;
}
