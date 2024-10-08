#include <iostream>
#include <algorithm>
using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}