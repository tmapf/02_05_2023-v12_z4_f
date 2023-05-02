#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, tem = 0, max = 0, min;
    cout << "insert number of items: ":
    cin >> n;

    vector <int> a(n);
    vector <int> b(0);
    vector <int> c(0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (min > a[i])
            min = a[i];
    }

    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0 || a[i] % 3 == 0 || a[i] % 5 == 0) {
            tem = a[i];
            while (tem % 2 == 0)
                tem = tem / 2;
            while (tem % 3 == 0)
                tem = tem / 3; 
            while (tem % 5 == 0)
                tem = tem / 5;
            if (tem > 1)
                b.push_back(a[i]);
        }
    for (int i = 0; i < b.size(); i++)
        c.push_back((rand() % (max - min + 1)) + min);

    cout << "2nd list: ";
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;
    cout << "3rd list: ";
    for (int i = 0; i < c.size(); i++)
        cout << c[i] << " ";

    return 0;
}
