#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int i = 0;
    int arr1[n];
    int arr2[n];
    for(i = 0;i < n;i++)
    {
        cin >> arr1[i];
    }

    int m = 0;
    cin >> m;
    int ret = 0;
    while(ret = m % n)
    {
        for(i = 0;i < n;i++)
        {
            if(ret + i <= n - 1)
                arr2[ret + i] = arr1[i];
            else
                arr2[(ret + i) % n] = arr1[i];
        }
        break;
    }
    for(i = 0;i < n;i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
