
#include <bits/stdc++.h>
using namespace std;
void merge(int n, vector<int> &arr, int low, int mid, int high)
{
    int right = low;
    int left = mid + 1;
    vector<int> answer;
    while (right <= mid && left <= high)
    {
        if (arr[right] < arr[left])
        {
            answer.push_back(arr[right]);
        }
        else
            answer.push_back(arr[left]);
    }
    while (right <= mid)
    {
        answer.push_back(arr[right]);
    }
    while (left <= high)
    {
        answer.push_back(arr[left]);
    }

    for (int i = low; i < high; i++)
    {
        arr[i] = answer[i - low];
    }
}
void mergesort(int n, vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergesort(n, arr, low, mid);
    mergesort(n, arr, mid + 1, high);
    merge(n, arr, low, mid, high);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    mergesort(n, arr, 0, n - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
