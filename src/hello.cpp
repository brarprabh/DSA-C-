// #include <bits/stdc++.h>
// using namespace std;
// void printpattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n - i; j > 0; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printpattern(n);
// }

// PAIR lie in utility library

// # include<bits/stdc++.h>
// using namespace std;
//     void explainPair() {
//         pair<int, int> p = {1, 3};
//         cout << p.first << " " << p.second;
//         pair<int, pair<int, int>> p = {1, {3, 4}};

//         pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
//         cout << arr[1].second;
//     }

// int main() {
//     int n;
//     cin >> n;

// }

// VECTORS..

// # include<bits/stdc++.h>
// using namespace std;
//     void explainVector() {
//         vector<int> v;
//         v.push_back(1);
//         v.emplace_back(2);

//         vector<pair<int, int>> vec;

//         vec.push_back({1,2});
//         vec.emplace_back(1,2);

//         vector<int> v(5, 100);     { 100, 100, 100, 100, 100};
//         vector<int> v2(v);

//         cout << v2[0] <<endl;

//         vector<int>::iterator it =  v.begin();   // it is address;
//         it++;
//         cout << *(it);

//         for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//             cout<< *(it);
//         }
//         for(auto it = v.begin();it!=v.end(); it++) {
//             cout<< *(it);
//         }
//         for(auto it : v) {
//             cout << it << " ";
//         }

//         v.erase(v.begin());
//         v.insert(v.begin()+1, 100);

//     }

// list

// #include<bits/stdc++.h>
// using namespace std;

// void explainList() {
//     list<int> ls;
//     ls.push_back(2);
//     ls.emplace_back(4);      //insert is taking time.. comple..

//     ls.push_front(5);
//     ls.emplace_front();
// }

// deque is same as ls

// Stack..

// set<int> s;   everythimg in the sorted order
// auto it = st.find(3); it will return an iterator..

// MAP
//  keys are unique but the val can be different
//  void explainMap() {
//      map<int, int> mpp;
//      map<int, pair<int, int>> mpp;
//      map<pair<int, int>, int> mpp;

//     mpp[1] = 2;
//     mpp.emplace({3, 1});
//     mpp.insert({2, 4});

//     mpp({2, 3}) = 23;     // for third case..
//     for(auto it : mpp) {
//         cout << it.first <<" " << it.second << endl ;
//      }
//      cout<< mpp[4];
// }

// ALGORITHIRM.. For Comparator

// #include<bits/stdc++.h>
// using namespace std;

// void explainExtra() {
//     sort(a, a + n);
//     sort(v.begin(), v.end());
//     sort(a, a + n, greater<int>);

//     bool comp(pair<int, int>p1, pair<int, int>p2) {
//         if(p1.second < p2.second) return true;
//         if(p1.second > p2.second) return false;

//         if(p1.first > p2.first) return true;
//         if(p1.firts < p2.first) return false;
//     }
//     pair<int, int>arr[] = {{1, 3}, {3, 4}, {6, 7}};
//     sort(a, a+n, comp);
// }

//  Count the number of factors...

// # include <bits/stdc++.h>
// using namespace std;
//    void countDigits(int n) {
//     list<int> ls;
//      for(int i = 1; i * i <= n; i++) { //   O(sqrt(n))
//         if(n % i == 0) {
//            ls.push_back(i);
//             if((n/i) != i) {
//                 ls.push_back(n/i); // like for 36 - 6 * 6 the first i i.e 6 will be taken
//             }
//         }
//      }
//      sort(ls.begin(), ls.end());   // nlog(n);
//      for(auto it : ls) cout << it << " ";  // n
//    }

//    int main() {
//     int n;
//     cin >> n;
//     countDigits(n);
//    }

// GCD

// # include <bits/stdc++.h>
// using namespace std;

// void gcd(int a, int b) {
//     while(a > 0 && b > 0) {    // O(log@ (m(a, b)))
//         if(a > b) a = a % b;
//         else b = b % a;
//     }
//     if(a == 0) cout << b;  // its opposite will be the answer
//     else cout << a;
// }

// binary search

// #include <bits/stdc++.h>
// using namespace std;

// void binarySearch(int arr[], int n, int num)
// {
//     int s = 0;
//     int l = n - 1;
//     int mid;
//     while (s < l)
//     {
//         mid = (s + l) / 2;
//         if (arr[mid] == num)
//         {
//             cout << "element found " << mid + 1 << endl;
//             break;
//         }
//         else if (arr[mid] < num)
//         {
//             mid = s + 1;
//         }
//         else if (arr[mid] > num)
//         {
//             mid = l - 1;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     int num = 3;
//     binarySearch(arr, n, num);
//     return 0;
// }

// Recursion

// # include<bits/stdc++.h>
// using namespace std;

// void recursion(int i, int n) {
//     if(i > n) return;
//     recursion(i+1, n);
//     cout << i << endl;
// }

// int main() {
//     int n;
//     cin >> n;

//     recursion(1, n);
// }

// Checking if a string is a palindrome ot not

// #include <bits/stdc++.h>
// using namespace std;
// int f(int i, string &s)
// {
//     if (i >= s.size() / 2)
//     {
//         return true; // jdo condition true ho gyi ta palindrome ho ju...
//     }
//     if (s[i] != s[s.size() - i - 1])  // conditon is checked for palindrome..
//         return false;

//     return f(i + 1, s);
// }
// int main()
// {
//     string s;
//     cin >> s;

//     cout << f(0, s);
// }

// Hashing

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int hash[25] = {0};   // map is fine as we dont need to assign the values...
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;    // to make in number format..
//     }
//     int q;
//     cin >> q;

//     while (q--)  // These are test cases..
//     {
//         char ch;
//         cin >> ch;
//         cout << hash[ch - 'a']; // galti alert solved
//     }
//     return 0;
// }

// Hashing using maps

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     // int q;
//     // cin >> q;

//     map<char, int> mpp;  // imp...
//     for (int i = 0; i < s.size(); i++)
//     {
//         mpp[s[i]]++;
//     }
//     int maxFreq = INT_MIN;
//     int minFreq = INT_MAX;
//     for (auto it : mpp)
//     {
//         cout << it.first << "-->" << it.second << endl;
//         if (it.second > maxFreq)
//         {
//             maxFreq = it.second;
//         }
//         if (it.second < minFreq)
//         {
//             minFreq = it.second;
//         }
//     }
//     // while(q--) {
//     //     char ch;
//     //     cin >> ch;
//     //     cout << mpp[ch];
//     //}
//     cout << "Maximum frequency is" << maxFreq << endl;
//     cout << "Minimum frequency is" << minFreq << endl;
//     return 0;
// }

// largest and second largest elements

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> greatest(vector<int> &a, int n)
// {
//     int largest = INT_MIN;
//     int slargest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > largest)
//         {
//             slargest = largest;
//             largest = a[i];
//         }
//         else if (a[i] < largest && a[i] > slargest)
//             slargest = a[i];
//     }
//     return {largest, slargest};
// }
// vector<int> answer(vector<int> &a, int n)
// {
//     return greatest(a, n);
// }
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr; // no need to use[]
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x); // insert will not work
//     }

//     vector<int> ans = answer(arr, n); // jive structure hunda si
//     cout << ans[0] << " " << ans[1];
//     return 0;
// }

//  left rotate array by d elements

// # include <bits/stdc++.h>
// using namespace std;
// void rotate(int arr[], int n, int d) {
//     d = d % n;
//     int temp[d];
//     for(int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }
//     for(int i = d; i < n; i++) {
//         arr[i-d] = arr[i];  // 0 toh start hoyo ga..
//     }
//     for(int i = n-d; i < n; i++) { // kyunki more than d h skde aa
//         arr[i] = temp[i - (n-d)];   // temp vich 0 toh store aa...    0 lyi jehda vi ode = aa ode nal - kr dena..
//     }
// }
// int main() {
//     int n; cin >> n;
//     int d; cin >> d;
//     int arr[n] ;
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     rotate(arr, n, d);
//     for(int i = 0; i < n; i++) cout << arr[i];
//     return 0;
// }

// Moves all the zeros to the right

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> move(vector<int> &arr, int n)
// {
//     int j = -1; // we dont know the position of j
//     for (int i = 0; i < n; i++)  // position of first zero  // optimisation
//     {
//         if (arr[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }
//     for (int i = j + 1; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     return arr;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> result = move(arr, n);
//     for (auto it : result)
//         cout << it << " ";
//     return 0;
// }

// Union using 2 pointer approach

// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the union of two sorted arrays
// vector<int> findUnion(const vector<int> &arr, const vector<int> &brr)
// {
//     int i = 0, j = 0;
//     vector<int> result;
//     int n1 = arr.size(), n2 = brr.size();

//     while (i < n1 && j < n2)
//     {
//         // Avoid duplicates in result
//         int val;
//         if (arr[i] < brr[j]) // jehde element arr vich smaller aa o print ho jan ge
//         {
//             val = arr[i++];
//         }
//         else if (arr[i] > brr[j]) // jehde element brr vich smaller aa o print ho jan ge
//         {
//             val = brr[j++];
//         }
//         else
//         {
//             val = arr[i++]; // unique value ek var leni aa..
//             j++;// so j will not be considered..
//         }
//         if (result.empty() || result.back() != val)  // since .back() aa gaya egde case should be considered
//             result.push_back(val);
//     }
//     // Add remaining elements from arr
//     while (i < n1)
//     {
//         if (result.empty() || result.back() != arr[i])
//             result.push_back(arr[i]);
//         i++;
//     }
//     // Add remaining elements from brr
//     while (j < n2)
//     {
//         if (result.empty() || result.back() != brr[j])
//             result.push_back(brr[j]);
//         j++;
//     }
//     return result;
// }

// int main()
// {
//     int n1, n2;
//     cin >> n1;
//     vector<int> arr(n1);
//     for (int i = 0; i < n1; i++)
//         cin >> arr[i];

//     cin >> n2;
//     vector<int> brr(n2);
//     for (int i = 0; i < n2; i++)
//         cin >> brr[i];

//     vector<int> result = findUnion(arr, brr);
//     for (int num : result)
//         cout << num << " ";
//     return 0;
// }

// Intersection

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> intersectionarr(vector<int> arr, vector<int> brr, int n1, int n2)
// {
//     int i = 0;
//     int j = 0;
//     vector<int> insertarr;
//     while (i < n1 && j < n2)
//     {
//         if (arr[i] < brr[j])
//             i++;

//         else if (arr[i] > brr[j])
//             j++;
//         else
//         {
//             insertarr.push_back(arr[i]); // when same only one element will be printed..
//             i++;
//             j++;
//         }
//     }
//     return insertarr;
// }
// int main()
// {
//     int n1;
//     cin >> n1;
//     vector<int> arr;
//     for (int i = 0; i < n1; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int n2;
//     cin >> n2;
//     vector<int> brr;
//     for (int i = 0; i < n2; i++)
//     {
//         int y;
//         cin >> y;
//         brr.push_back(y);
//     }
//     vector<int> result = intersectionarr(arr, brr, n1, n2);
//     for (auto it : result)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Finding missing number using xor

// # include <bits/stdc++.h>
// using namespace std;
//     vector<int> missing(vector<int> &arr, int n){
//         int N = n - 1;  // since one number is missing
//         int Xor1 = 0, Xor2 = 0;
//         vector<int> ans;
//         for(int i = 0; i < N; i++) {
//             Xor2 = Xor2 ^ arr[i];  // array is 0 based indexing
//             Xor1 = Xor1 ^ (i+1); // to store all natural number
//         }
//         Xor1 = Xor1 ^ n;
//         ans.push_back(Xor1 ^ Xor2);  // jehda nhi aaya is vich push_back hoju ga..
//         return ans;
//     }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> answer = missing( arr, n);
//     for(auto it : answer) {
//         cout << it << " ";
//     }
//     return 0;
// }

// Maximum consequtuve ones

// # include <bits/stdc++.h>
// using namespace std;
//     int conseq(vector<int> arr, int n) {
//         int maxi = 0;
//         int count = 0;
//         for(int i = 0; i < n; i++) {
//             if(arr[i] == 1) {
//                 count++;
//                 maxi = max(maxi, count);
//             }
//             else{
//                 count = 0;
//             }
//         }
//         return maxi;
//     }
// int main() {
//     int n; cin >> n;
//     vector<int> arr;
//     for(int i =0; i < n; i++) {
//         int x; cin >> x;
//         arr.push_back(x);
//     }
//     cout << conseq(arr, n);
//     return 0;
// }

// Sub array with sum = k // this appproach is known as sliding window..

// #include <bits/stdc++.h>
// using namespace std;
// int subarray(vector<int> arr, int k)
// {
//     int sum = 0;
//     int n = arr.size();
//     int left = 0;
//     int right = 0;
//     int maxlen = 0;
//     for (int right = 0; right < n; right++)
//     {
//         sum += arr[right];
//         while (sum > k && left <= right)  // whenever the sum is less the loop will not run
//         {
//             sum -= arr[left];
//             left++;
//         }
//         if (sum == k)   // right and left indexes will be there but not the length
//             maxlen = max(maxlen, right - left + 1);
//     }
//     return maxlen;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int k;
//     cin >> k;
//     cout << subarray(arr, k);
//     return 0;
// }

// Two sum problem

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> twosum(vector<int> arr, int n, int target)
// {
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int more = target - num;
//         if (mpp.find(more) != mpp.end())
//         {
//             cout << "Yes" << endl;
//             return {{more, num}, {mpp[more], i}}; // returning the indexes
//         }
//         mpp[num] = i; // index ta store krna hi aa na...
//     }
//     return {{-1, -1}, {-1, -1}};
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     vector<vector<int>> answer = twosum(arr, n, target);
//     cout << "Numbers: " << answer[0][0] << " " << answer[0][1] << endl;
//     cout << "Indices: " << answer[1][0] << " " << answer[1][1] << endl;
//     return 0;
// }

// optimal solution for two sum problem

// #include <bits/stdc++.h>
// using namespace std;
// string twosum(vector<int> arr, int n, int target)
// {
//     int right = 0;
//     int left = n - 1;
//     while (right < left)
//     {
//         int sum = arr[right] + arr[left];
//         if (sum == target)
//         {
//             return "Yes";
//         }
//         else if (sum < target)
//             right++;
//         else
//             left--;
//     }
//     return "No";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     string answer = twosum(arr, n, target);
//     cout << answer;
//     return 0;
// }

// Dutch national flag algorithm sorting 0'1'2..

// #include <bits/stdc++.h>
// using namespace std;
// void dutch(vector<int> &arr, int n)
// {
//     int low = 0, mid = 0, high = n - 1;
//     while (mid <= high)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[mid], arr[low]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     dutch(arr, n);
//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Finding majority elements using hash map better approach

// #include <bits/stdc++.h>
// using namespace std;
// void maj(vector<int> arr, int n)
// {
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for (auto it : mpp)
//     {
//         if (it.second > n / 2) // the index is stored in the second..
//         {
//             cout << it.first; // the element will be in the first..
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     maj(arr, n);
//     return 0;
// }

// majority element using moore algorithm  n/2 times..

// #include <bits/stdc++.h>
// using namespace std;
// int maj(vector<int> arr, int n)
// {
//     int count = 0, cnt = 0;
//     int el;
//     for (int i = 0; i < n; i++)
//     {
//         if (count == 0)
//         {
//             el = arr[i];
//             count = 1;
//         }
//         else if (el == arr[i])
//             count++;
//         else
//             count--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (el == arr[i])
//             cnt++; // to check if its the majority element or not
//     }
//     if (cnt > n / 2)
//         return el;  // el apa moore's algo toh vekhya..
//     else
//         return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     cout << maj(arr, n);
//     return 0;
// }

// Kadane algorithm to find sum of longest subarray

// #include <bits/stdc++.h>
// using namespace std;
// int longestsum(vector<int> arr, int n)
// {
//     int startind = -1, endind = -1, start = -1;
//     int sum = 0;
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (sum == 0)
//             start = i;   // for the index to be start
//         sum += arr[i];
//         if (sum > maxi)
//         {
//             maxi = sum;
//             startind = start;
//             endind = i;
//         }
//         else if (sum < 0)
//             sum = 0;
//     }
//     cout << startind << " " << endind << endl;
//     return maxi;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     cout << longestsum(arr, n);
//     return 0;
// }

// DP on buy and sell

// #include <bits/stdc++.h>
// using namespace std;
// int buyorsell(vector<int> arr, int n)
// {
//     int mini = arr[0];
//     int maxprofit = 0;
//     for (int i = 1; i < n; i++)
//     {
//         int cost = arr[i] - mini;
//         maxprofit = max(maxprofit, cost);
//         mini = min(mini, arr[i]);
//     }
//     return maxprofit;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     cout << buyorsell(arr, n);
//     return 0;
// }

// num to arrange at positive and negative indexes

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> arrange(vector<int> &arr, int n)
// {
//     vector<int> answer(n, 0);
//     int pos = 0;
//     int neg = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             answer[pos] = arr[i];
//             pos += 2;
//         }
//         else if (arr[i] > 0)
//         {
//             answer[neg] = arr[i];
//             neg += 2;
//         }
//     }
//     return answer;
// }
// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> answer;
//     answer = arrange(arr, n);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// neg and postive are greater than each other

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> arrange(vector<int> arr, int n)
// {
//     vector<int> pos, neg;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//             pos.push_back(arr[i]);
//         else if (arr[i] < 0)
//             neg.push_back(arr[i]);
//     }
//     vector<int> result;
//     int i = 0, j = 0;
//     while (i < pos.size() && j < neg.size())
//     {
//         result.push_back(pos[i++]);
//         result.push_back(neg[j++]);
//     }
//     while (i < pos.size())
//         result.push_back(pos[i++]);
//     while (j < neg.size())
//         result.push_back(neg[j++]);
//     return result;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> answer;
//     answer = arrange(arr, n);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Next Permutations..

// #include <bits/stdc++.h>
// using namespace std;
// void per(vector<int> &arr, int n)
// {
//     int index = -1;
//     for (int i = n - 2; i > 0; i--)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             index = i;  //smallest index.. or dip is found
//             break;
//         }
//     }
//     if (index == -1)
//         reverse(arr.begin(), arr.end()); //if no dip found just reverse
//     for (int i = n - 1; i > index; i--)
//     {
//         if (arr[i] > arr[index])  // thoda ja greater ..
//         {
//             swap(arr[i], arr[index]);
//         } // since ek element nal compare krna
//     }
//     reverse(arr.begin() + index + 1, arr.end());
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     per(arr, n);
//     for (auto it : arr)
//     {
//         cout << it;
//     }
//     return 0;
// }

// Leaders in an array

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> leader(vector<int> arr, int n)
// {
//     int maxi = INT_MIN;
//     vector<int> answer;
//     for (int i = n - 1; i > 0; i--)
//     {
//         if (arr[i] > maxi)
//         {
//             answer.push_back(arr[i]);
//         }
//         maxi = max(maxi, arr[i]);
//     }
//     reverse(answer.begin(), answer.end());
//     return answer;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> answer = leader(arr, n);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Maximum consecutive number

// #include <bits/stdc++.h>
// using namespace std;
// int maxcon(vector<int> arr, int n)
// {
//     if (n == 0)
//         return 0;
//     // sort(arr.begin(), arr.end());
//     int longest = 1, count = 1;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i - 1] + 1)
//             count++;
//         else
//             count = 1;
//         longest = max(longest, count);
//     }
//     return longest;
// }

// int main()

// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int longest = maxcon(arr, n);
//     cout << longest;
//     return 0;
// }

// Set matrix zeros

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> setzero(int n, int m, vector<vector<int>> matrix)
// {
//     // col = matrix[0][..]
//     // row = matrix[..][0]
//     int col0 = 1; // just assigning the value
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 matrix[i][0] = 0; // making rows 0;
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < m; j++)
//         {
//             if (matrix[i][j] != 0)
//             {
//                 if (matrix[0][j] == 0 || matrix[i][0] == 0)
//                 {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
//     if (matrix[0][0] == 0)
//     {
//         for (int j = 0; j < m; j++)

//             matrix[0][j] = 0;
//     }
//     if (col0 == 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             matrix[i][0] = 0;
//         }
//     }
//     return matrix;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;
//     vector<vector<int>> matrix(n, vector<int>(m));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
//     vector<vector<int>> answer = setzero(n, m, matrix);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << answer[i][j];
//         }
//     }
// }

// Rotate matrix by 90 degree

// #include <bits/stdc++.h>
// using namespace std;
// void rotate90(int n, int m, vector<vector<int>> &matrix)
// {
//     // Transposing the matrix..
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     for (int i = 0; i < n; i++)  // for rows
//     {
//         reverse(matrix[i].begin(), matrix[i].end());   // its in vector so these functions are used..
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;

//     vector<vector<int>> matrix(n, vector<int>(m));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
//     rotate90(n, m, matrix);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Spiral matrix

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> spiralmat(int n, int m, vector<vector<int>> arr)
// {
//     int left = 0;
//     int right = m - 1;
//     int top = 0;
//     int bottom = n - 1;
//     vector<int> answer;
//     while (left <= right && top <= bottom)
//     {
//         for (int i = left; i <= right; i++)
//         {
//             answer.push_back(arr[top][i]);
//         }
//         top++;
//         for (int i = top; i <= bottom; i++)
//         {
//             answer.push_back(arr[i][right]);
//         }
//         right--;
//         if (top <= bottom) //as a safe case..
//         {
//             for (int i = right; i >= left; i--)
//             {
//                 answer.push_back(arr[bottom][i]);
//             }
//             bottom--;
//         }
//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//             {
//                 answer.push_back(arr[i][left]);
//             }
//             left++;
//         }
//     }
//     return answer;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int m;
//     cin >> m;
//     vector<vector<int>> arr(n, vector<int>(m));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     vector<int> answer = spiralmat(n, m, arr);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Selection sort

// #include <bits/stdc++.h>
// using namespace std;
// void selectionsort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int mini = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[mini])
//             {
//                 mini = j;
//             }
//         }
//         int temp = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = temp;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selectionsort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Insertion sort

// #include <bits/stdc++.h>
// using namespace std;
// void insertionsort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j])
//         {
//             swap(arr[j], arr[j - 1]);
//             j--;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     insertionsort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// Merge sort

// #include <bits/stdc++.h>
// using namespace std;
// void merge(int n, vector<int> &arr, int low, int mid, int high)
// {
//     int right = low;
//     int left = mid + 1;
//     vector<int> answer;
//     while (right <= mid && left <= high)
//     {
//         if (arr[right] < arr[left])
//         {
//             answer.push_back(arr[right]);
//             right++;
//         }
//         else
//         {
//             answer.push_back(arr[left]);
//             left++;
//         }
//     }
//     while (right <= mid)
//     {
//         answer.push_back(arr[right]);
//         right++;
//     }
//     while (left <= high)
//     {
//         answer.push_back(arr[left]);
//         left++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = answer[i - low]; // low could be anything..
//     }
// }
// void mergesort(int n, vector<int> &arr, int low, int high)
// {
//     if (low == high)
//         return;
//     int mid = (low + high) / 2;
//     mergesort(n, arr, low, mid);
//     mergesort(n, arr, mid + 1, high);
//     merge(n, arr, low, mid, high);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }

//     mergesort(n, arr, 0, n - 1);
//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Quick sort

// #include <bits/stdc++.h>
// using namespace std;

// int partion(int n, vector<int> &arr, int low, int high)
// {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;

//     while (i < j)
//     {
//         while (arr[i] <= pivot && i <= high - 1)
//         {
//             i++;
//         }
//         while (arr[j] > pivot && j >= low + 1)
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[low], arr[j]); // Its not always to zero
//     return j;
// }

// void quicksort(int n, vector<int> &arr, int low, int high)
// {
//     if (low < high)
//     {
//         int pindex = partion(n, arr, low, high); //sorting ethe perform hogi..
//         quicksort(n, arr, low, pindex - 1);
//         quicksort(n, arr, pindex + 1, high);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }

//     quicksort(n, arr, 0, n - 1);
//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// pascal triangle and single row of pascal triangle

// class Solution {
// public:
//     vector<int> generaterows(int rows) {
//         vector<int> result;
//     long long answer = 1;
//         result.push_back(answer);   // all start with 1
//         for(int col = 1; col < rows; col++) {  // 0 already done
//             answer = answer * (rows-col);
//             answer = answer / col;
//             result.push_back(answer);
//         }
//         return result;
//     }

//     vector<vector<int>> generate(int numRows) {
//           vector<vector<int>> answer;
//         for(int i = 1; i <= numRows; i++) {
//              answer.push_back(generaterows(i)); // vector return kru ga..
//         }
//         return answer;
//     }
// };

// majority element more than n/3 times better solution

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majelement(vector<int> arr, int n)
// {
//     map<int, int> mpp;
//     vector<int> answer;
//     int min = (int)(n / 3) + 1;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;  // elemnt da count++ ho jauga..
//         if (mpp[arr[i]] == min)
//         {
//             answer.push_back(arr[i]);
//         }
//         if (answer.size() == 2)
//             break; // as an optimisation
//     }
//     return answer;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> answer = majelement(arr, n);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Optimal solution for n/3 maj element moore's algorithm

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majelement(vector<int> arr, int n)
// {
//     int cnt1 = 0;
//     int cnt2 = 0;
//     int el1 = INT_MIN;
//     int el2 = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (cnt1 == 0 && arr[i] != el2)
//         {
//             el1 = arr[i];
//             cnt1 = 1;
//         }
//         else if (cnt2 == 0 && arr[i] != el1)
//         {
//             el2 = arr[i];
//             cnt2 = 1;
//         }
//         else if (arr[i] == el1)
//         {
//             cnt1++;
//         }
//         else if (arr[i] == el2)
//         {
//             cnt2++;
//         }
//         else
//         {
//             cnt1--;
//             cnt2--;
//         }
//     }
//     vector<int> answer;
//     cnt1 = 0;
//     cnt2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == el1)
//             cnt1++;
//         if (arr[i] == el2)
//             cnt2++;
//     }
//     int mini = (int)(n / 3) + 1;
//     if (cnt1 >= mini)
//         answer.push_back(el1);
//     if (cnt2 >= mini)
//         answer.push_back(el2);
//     return answer;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> answer = majelement(arr, n);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Three sum problem  better soln

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threesum(vector<int> arr, int n)
// {
//     set<vector<int>> stt;
//     for (int i = 0; i < n; i++)
//     {
//         set<int> st;

//         for (int j = i + 1; j < n; j++)
//         {
//             int third = -(arr[i] + arr[j]);
//             if (st.find(third) != st.end())
//             {
//                 vector<int> temp = {arr[i], arr[j], third};
//                 sort(temp.begin(), temp.end());
//                 stt.insert(temp);
//             }
//             st.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(stt.begin(), stt.end());
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<vector<int>> answer = threesum(arr, n);

//     for (auto it : answer)
//     {
//         for (auto val : it)
//         {
//             cout << val << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// optimal soln for three sum problem

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threesum(vector<int> arr, int n)
// {
//     sort(arr.begin(), arr.end());
//     vector<vector<int>> answer;
//     for (int i = 0; i < n; i++)
//     {
//         int j = i + 1;
//         int k = n - 1;
//         if (i > 0 && arr[i] == arr[i - 1])
//             continue;
//         while (j < k)
//         {
//             int sum = arr[i] + arr[j] + arr[k];

//             if (sum < 0)
//                 j++;
//             else if (sum > 0)
//                 k--;

//             else
//             {
//                 vector<int> temp = {arr[i], arr[j], arr[k]};
//                 answer.push_back(temp);
//                 j++;
//                 k--;
//                 while (j < k && arr[j] == arr[j - 1])
//                     j++;
//                 while (j < k && arr[k] == arr[k + 1])
//                     k--;
//             }
//         }
//     }
//     return answer;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<vector<int>> answer = threesum(arr, n);

//     for (auto it : answer)
//     {
//         for (auto val : it)
//         {
//             cout << val << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// 4sum

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> foursum(vector<int> arr, int n, int target)
// {
//     sort(arr.begin(), arr.end());  // we want in sorted order //pointer aa also sum + - krn vich dikat na aave..
//     vector<vector<int>> answer;
//     for (int i = 0; i < n; i++)
//     {
//         if (i > 0 && arr[i] == arr[i - 1])
//             continue;    // why to repeat same that's why..
//         for (int j = i + 1; j < n; j++)
//         {
//             if (j > (i + 1) && arr[j] == arr[j - 1])
//                 continue;
//             int k = j + 1;
//             int l = n - 1;
//             while (k < l)
//             {
//                 long long sum = arr[i];
//                 sum += arr[j];
//                 sum += arr[k];
//                 sum += arr[l];

//                 if (sum == target)
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
//                     answer.push_back(temp);
//                     k++;
//                     l--;
//                     while (k < l && arr[k] == arr[k - 1])
//                         k++;
//                     while (k < l && arr[l] == arr[l + 1])
//                         l--;
//                 }
//                 else if (sum < target)
//                     k++;
//                 else
//                     l--;
//             }
//         }
//     }
//     return answer;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     vector<vector<int>> answer = foursum(arr, n, target);

//     for (auto it : answer)
//     {
//         for (auto val : it)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Longest subarray with sum = 0 using maps

// #include <bits/stdc++.h>
// using namespace std;

// int maxsubarray(vector<int> arr, int n)
// {
//     int sum = 0;
//     int maxi = 0;
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//         if (sum == 0)
//         {
//              maxi = i + 1; // the first time sum = 0 is coming..
//         }
//         else if (mpp.find(sum) != mpp.end())
//         {
//             maxi = max(maxi, i - mpp[sum]);// phela number aa  gya te phir agla number = 0 ho gya means vichale zero hoya..
//         }
//         else
//         {
//             mpp[sum] = i;
//         }
//     }
//     return maxi;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int maxi = maxsubarray(arr, n);
//     cout << maxi;
//     return 0;
// }

// number of subarray with xor k

// #include <bits/stdc++.h>
// using namespace std;

// int xormax(vector<int> arr, int n, int target)
// {
//     int xr = 0;
//     int count = 0;
//     map<int, int> mpp;
//     mpp[xr]++; // store the key value pair of {0, 1}
//     for (int i = 0; i < n; i++)
//     {
//         xr = xr ^ arr[i];
//         int x = xr ^ target; // remaining xor for the target
//         count += mpp[x];   // give the number of time/value xor is coming...
//         mpp[xr]++; // we have to store the xor not the x   &&   x will find its value
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     int count = xormax(arr, n, target);
//     cout << count;
//     return 0;
// }

// Merge ovrelaping intervals

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> overlappingele(vector<vector<int>> arr)
// {
//     int n = arr.size();
//     vector<vector<int>> answer;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < n; i++)
//     {

//         if (answer.empty() || arr[i][0] >= answer.back()[1])
//         {
//             answer.push_back(arr[i]); // new start krna
//         }
//         else
//         {
//             answer.back()[1] = max(answer.back()[1], arr[i][1]); // previous nu hi expand krna with maximum..
//         }
//     }
//     return answer;
// }
// int main()
// {
//     int x;
//     cin >> x;
//     vector<vector<int>> arr(x, vector<int>(2));  // row  = x and col = 2;
//     for (int i = 0; i < x; i++)
//     {

//         cin >> arr[i][0] >> arr[i][1];
//     }
//     vector<vector<int>> answer = overlappingele(arr);
//     for (auto it : answer)
//     {
//         for (auto val : it)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// merge two sorted arrays

// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, vector<int> &brr, int n1, int n2)
// {
//     int left = n1 - 1;
//     int right = 0;
//     while (left >= 0 && right < n2)
//     {
//         if (arr[left] > brr[right])
//         {
//             swap(arr[left], brr[right]);
//             left--;
//             right++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     sort(arr.begin(), arr.end() + n1);  // make sure that zero should not come in first for leetcode case..
//     sort(brr.begin(), brr.end());
// }

// int main()
// {
//     int n1;
//     cin >> n1;
//     int n2;
//     cin >> n2;

//     vector<int> arr;
//     for (int i = 0; i < n1; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> brr;
//     for (int i = 0; i < n2; i++)
//     {
//         int x;
//         cin >> x;
//         brr.push_back(x);
//     }
//     merge(arr, brr, n1, n2);
//     return 0;
// }

// max product of subarray

// #include <bits/stdc++.h>
// using namespace std;

// int maxprod(vector<int> &arr, int n)
// {
//     int maxi = INT_MIN;
//     int pre = 1;
//     int suff = 1;
//     for (int i = 0; i < n; i++)
//     {

//         pre = pre * arr[i];
//         suff = suff * arr[n - 1 - i]; // imp step;

//         maxi = max(maxi, max(pre, suff));

//         if (pre == 0)  // jdo zero aa gya
//             pre = 1;
//         if (suff == 0)
//             suff = 1;
//     }
//     return maxi;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int count = maxprod(arr, n);
//     cout << count;
//     return 0;
// }

// Find the missing and the repeating number

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> missrep(vector<int> arr, int n)
// {
//     int sn = n * (n + 1) / 2;
//     int sn2 = n * (n + 1) * (2 * n + 1) / 6;

//     int s = 0;
//     int s2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         s += arr[i];
//         s2 += arr[i] * arr[i];
//     }
//     int val1 = s - sn;
//     int val2 = s2 - sn2;

//     val2 = val2 / val1;        // value of x + y;
//     int x = (val1 + val2) / 2; // these should be different..
//     int y = x - val1;

//     return {x, y};
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> ans = missrep(arr, n);

//     for (auto it : ans)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Count the number of inversions

// #include <bits/stdc++.h>
// using namespace std;

// int merge(vector<int> &arr, int n, int low, int mid, int high)
// {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;
//     int count = 0;
//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);  // left (>) vich greater aa..
//             count += (mid - left + 1);  //left wale count krne aa..
//             right++;
//         }
//     }
//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
//     return count;
// }

// int mergesort(vector<int> &arr, int n, int low, int high)
// {
//     int count = 0;
//     int mid = (low + high) / 2;

//     if (low == high)
//         return count;
//     count += mergesort(arr, n, low, mid);
//     count += mergesort(arr, n, mid + 1, high);
//     count += merge(arr, n, low, mid, high);  //inversions are check in merge array while for reverse pairs a separate func is written since logic is diff
//     return count;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int count = mergesort(arr, n, 0, n - 1);
//     cout << count;
//     return 0;
// }

// Reverse pairs  arr[i] > 2 * arr[right]

// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector<int> &arr, int n, int low, int mid, int high)
// {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;

//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);

//             right++;
//         }
//     }
//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }

// int countpairs(vector<int> &arr, int n, int low, int mid, int high)
// {
//     int right = mid + 1;
//     int count = 0;
//     for (int i = low; i <= mid; i++)
//     {
//         while (right <= high && arr[i] > 2 * arr[right])
//             right++;
//         count += right - (mid + 1);
//     }
//     return count;
// }
// int mergesort(vector<int> &arr, int n, int low, int high)
// {
//     int count = 0;  //how many pairs are present..
//     int mid = (low + high) / 2;

//     if (low == high)
//         return count;
//     count += mergesort(arr, n, low, mid);
//     count += mergesort(arr, n, mid + 1, high);
//     count += countpairs(arr, n, low, mid, high);
//     merge(arr, n, low, mid, high);
//     return count;
// }
// int reversepairs(vector<int> &arr)
// {
//     int n = arr.size();
//     return mergesort(arr, n, 0, n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int count = reversepairs(arr);
//     cout << count;
//     return 0;
// }

// Binary search using recursion

// #include <bits/stdc++.h>
// using namespace std;

// int recurbinary(vector<int> arr, int low, int high, int target)  // tine parameters pass hon ge
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (target == arr[mid])
//         return mid;
//     else if (target > arr[mid])
//         return recurbinary(arr, mid + 1, high, target);
//     else
//         return recurbinary(arr, low, mid - 1, target);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     int index = recurbinary(arr, 0, n - 1, target);
//     cout << index;
//     return 0;
// }

// Lower Bound

// #include <bits/stdc++.h>
// using namespace std;

// int bs(vector<int> arr, int n, int target)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] >= target) // search insert position is also solved by lb   &&   it will be (arr[mid] > target) for upper bound;
//         {
//             ans = mid; // for this condition this could be lower bound
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     int index = bs(arr, n, target);
//     cout << index;
// }

// in floor just reverse the sign i.e <=  and return the arr[mid];

// Count the first and the last occurance of the elements

// #include <bits/stdc++.h>
// using namespace std;

// int firstocc(vector<int> arr, int n, int target)
// {
//     int first = -1;
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == target)
//         {
//             first = mid;
//             high = mid - 1;    // since we have to find smaller...
//         }
//         else if (arr[mid] > target)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return first;
// }

// int lastocc(vector<int> arr, int n, int target)
// {
//     int last = -1;
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == target)
//         {
//             last = mid;
//             low = mid + 1; // since we have to find greater..
//         }
//         else if (arr[mid] > target)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return last;
// }

// vector<int> firstndlast(vector<int> arr, int n, int target)
// {
//     int first = firstocc(arr, n, target);
//     if (first == -1)
//         return {-1, -1};
//     int last = lastocc(arr, n, target);
//     return {first, last}; // for no of occurance last - first + 1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     vector<int> answer;

//     answer = firstndlast(arr, n, target);

//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }

// Bianry search in rotated sorted array   je edr aa ta binary search lagu ja odher...

// #include <bits/stdc++.h>
// using namespace std;

// int bins(vector<int> arr, int n, int target)
// {
//     int low = 0;
//     int high = n - 1;
//     int pos;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == target)
//         {
//             pos = mid;
//             return pos;
//                 }
//         // left sorted  b/c binary search is performed on sorted array
//         if (arr[low] <= arr[mid])
//         {
//             if (arr[low] <= target && target <= arr[mid]) // make sure the value lie in bt the two..
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         // right sorted array...
//         else
//         {
//             if (arr[mid] <= target && target <= arr[high])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     int pos = bins(arr, n, target);
//     cout << pos;
//     return 0;
// }

// Binary Search with duplicates..  make sure the val lie in between  and two cases left sorted and right sorted..

// #include <bits/stdc++.h>
// using namespace std;

// bool bins(vector<int> arr, int n, int target)
// {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == target)
//         {
//             return true;
//         }
//         // if sorted cant be found.... it is a edge case..
//         if (arr[low] == arr[mid] && arr[mid] == arr[high])   // {2, 1, 2, 3 ,4, 3} // unsorted
//         {
//             high--;
//             low++;
//             continue;
//         }
//         // left sorted  b/c binary search is performed on sorted array
//         if (arr[low] <= arr[mid])
//         {
//             if (arr[low] <= target && target <= arr[mid]) // make sure the value lie in bt the two..
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         // right sorted array...
//         else
//         {
//             if (arr[mid] <= target && target <= arr[high])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int target;
//     cin >> target;
//     int pos = bins(arr, n, target);
//     cout << pos;
//     return 0;
// }

// Find the smallest in the sorted rotated array...

// #include <bits/stdc++.h>
// using namespace std;

// int smallbs(vector<int> arr, int n)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = INT_MAX;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         // taking first case..
//         if (arr[low] <= arr[high])
//         {
//             ans = min(ans, arr[low]); // min jarrori aa kyunki array sorted aa
//             break;
//         }

//         else if (arr[low] <= arr[mid])
//         {
//             ans = min(ans, arr[low]);
//             low = mid + 1;
//         }
//         else
//         {
//             ans = min(ans, arr[mid]);
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int small = smallbs(arr, n);
//     cout << small;
//     return small;
// }

// Find the number of times the array is rotated..

// #include <bits/stdc++.h>
// using namespace std;

// int smallbs(vector<int> arr, int n)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = INT_MAX;
//     int index;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//    // checking from the starting to end..
//         if (arr[low] <= arr[high])
//         {
//             ans = min(ans, arr[low]);
//             break;
//         }

//         else if (arr[low] <= arr[mid])
//         {
//             if (arr[low] < ans)
//             {
//                 index = low;  // give the index how much is rotated..
//                 ans = arr[low];  // sab toh cut index wala
//             }
//             low = mid + 1;
//         }
//         else   // all other conditions are taken..
//         {
//             if (arr[mid] < ans)
//             {
//                 index = mid;
//                 ans = arr[mid];
//             }
//             high = mid - 1;
//         }
//     }
//     return index;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int small = smallbs(arr, n);
//     cout << small;
//     return small;
// }

//  single element in sorted array..

// #include <bits/stdc++.h>
// using namespace std;

// int singlebs(vector<int> arr, int n)
// {
//     if (n == 1)
//         return arr[0];
//     if (arr[0] != arr[1])
//         return arr[0];
//     if (arr[n - 1] != arr[n - 2])
//         return arr[n - 1];

//     int low = 1;
//     int high = n - 2;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         //  both sides are not equal..
//         if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
//         {
//             return arr[mid];
//         }
//         // right side vich element present aa and we will move right..
//         else if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int ele = singlebs(arr, n);
//     cout << ele;
//     return 0;
// }

// Find the peak elements..  // in leetcode we have to retrun the index..

// #include <bits/stdc++.h>
// using namespace std;

// int findpeak(vector<int> arr, int n)
// {
//     if (n == 1)
//         return 0;
//     if (arr[0] > arr[1])
//         return 0;
//     if (arr[n - 1] > arr[n - 2])
//         return n - 1;

//     int low = 1;
//     int high = n - 2;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
//         {
//             return arr[mid];
//         } // Does the number is increasing so the peak lie on the right side...
//         else if (arr[mid] > arr[mid - 1])
//         {
//             low = mid + 1;
//         }
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int ele = findpeak(arr, n);
//     cout << ele;
//     return 0;
// }

// Find sqrt using binary search..

// #include <bits/stdc++.h>
// using namespace std;

// int findsq(int n)
// {
//     int low = 1;
//     int high = n;
//     int ans = 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int val = (mid * mid);

//         if (val <= n)   // equal to hona chaiyeda  ta low = mid + 1 we do...
//         {
//             ans = mid;
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int ele = findsq(n);
//     cout << ele;
//     return 0;
// }

// Find the nth root..

// #include <bits/stdc++.h>
// using namespace std;

// int func(int mid, int n, int m)
// {
//     long long ans = 1;
//     for (int i = 0; i < n; i++) // nth root of m..
//     {
//         ans *= mid;
//         if (ans > m)
//         {
//             return 2;
//         }
//     }
//     if (ans == m)
//         return 1;
//     return -1;
// }

// int findnth(int n, int m)
// {
//     int low = 1;
//     int high = m;   // high te mai notice kita max range hi hundi that it can attain..
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (func(mid, n, m) == 1)
//         {
//             return mid;
//         }
//         else if (func(mid, n, m) == 2)
//         {
//             high = mid - 1;  // vada answer aa gya ta chota krna...
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int m;
//     cin >> m;
//     int n;
//     cin >> n;

//     int answer = findnth(n, m);
//     cout << answer;
//     return 0;
// }

// Koko eating bananas

// #include <bits/stdc++.h>
// using namespace std;

// int maxi(vector<int> &arr, int n)
// {
//     int large = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > large)
//         {
//             large = arr[i];
//         }
//     }
//     return large;
// }

// long long totaltime(vector<int> &arr, int n, int mid)
// {
//     long long hrs = 0;
//     for (int i = 0; i < n; i++)
//     {
//         hrs += ceil((double)arr[i] / (double)mid); // kinna time lg reha mid kolo...
//     }
//     return hrs;
// }

// int countminbanana(vector<int> &arr, int n, int hourlimit)
// {
//     int low = 1;
//     int high = maxi(arr, n);   // These are ranges of how many banana he can eat..
//     int ans = INT_MAX;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         long long totalhrs = totaltime(arr, n, mid);
//         if (totalhrs <= hourlimit) // within hourlimit complete krna..
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }

//     int hourlimit;
//     cin >> hourlimit;

//     int minbanana = countminbanana(arr, n, hourlimit);
//     cout << minbanana;
//     return 0;
// }

// No of bouquets..

// #include <bits/stdc++.h>
// using namespace std;

// int noofbposs(vector<int> arr, int n, int mid, int m, int k) // k is __ how many for one..
// {
//     int count = 0;
//     int noofB = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] <= mid)
//             count++;
//         else
//         {
//             noofB += count / k;
//             count = 0;
//         }
//     }
//     noofB += count / k;
//     return noofB;
// }

// int countDays(vector<int> arr, int n, int m, int k)
// { // since no of days return krne aa no need of return any array..
//     long long val = m * 1LL * k * 1LL;

//     if (val > n) // edge case..   if the number of flower exceeds the existing flower then exits
//         return -1;

//     int mini = INT_MAX;
//     int maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxi)
//             maxi = arr[i];
//         if (arr[i] < mini)
//             mini = arr[i];
//     }
//     int low = mini;
//     int high = maxi;
//     int ans = high;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int possible = noofbposs(arr, n, mid, m, k);  // mid vale din te kinne bouquet possible aa..
//         if (possible >= m)  // min possible dekhna
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> arr;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int m;
//     cin >> m;
//     int k;
//     cin >> k;

//     int minDays = countDays(arr, n, m, k);
//     cout << minDays;
//     return 0;
// }

// Find the Smallest Divisor Given a Threshold | Binary Search

// #include <bits/stdc++.h>
// using namespace std;

// int noofdivisor(vector<int> arr, int n, int mid)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += ceil((double)arr[i] / (double)mid); // ceil value le k sum vich store kari jani aa..
//     }
//     return sum;
// }

// int mindivisor(vector<int> arr, int n, int threshold)
// {
//     if (n > threshold)  //it is a edge case...
//         return -1;
//     int low = 1;
//     int high = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > high)
//         {
//             high = arr[i];  // max nal ta divide hona jarrori aa..
//         }
//     }
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int noofd = noofdivisor(arr, n, mid);
//         if (noofd <= threshold)
//         {
//             high = mid - 1;  //min find krna..
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int threshold;
//     cin >> threshold;
//     int ans = mindivisor(arr, n, threshold);
//     cout << ans;
//     return 0;
// }

// BS-15. Capacity to Ship Packages within D Days

// #include <bits/stdc++.h>
// using namespace std;

// int noofdays(vector<int> arr, int n, int mid)
// {
//     int days = 1;  // start will be from day 1 not day 0
//     int load = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (load + arr[i] > mid)  // the load becomes greater than capacity the next day will be made
//         {
//             days += 1;
//             load = arr[i];
//         }
//         else
//         {
//             load += arr[i];
//         }
//     }
//     return days;
// }

// int leastdays(vector<int> arr, int n, int capacity)
// {
//     int low = *max_element(arr.begin(), arr.end()); // max of all [for 1 load to be taken atleast]
//     int high = accumulate(arr.begin(), arr.end(), 0); // submission of all

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int noofd = noofdays(arr, n, mid);

//         if (noofd <= capacity)  // min days find krne aa
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int capacity;
//     cin >> capacity;
//     int ans = leastdays(arr, n, capacity);
//     cout << ans;
//     return 0;
// }

// BS-16. Kth Missing Positive Number | Maths + Binary Search

// #include <bits/stdc++.h>
// using namespace std;

// int findmissele(vector<int> arr, int n, int k)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int missing = arr[mid] - (mid + 1);  // it is the how many missing ele are there
//         if (missing < k)
//         {
//             low = mid + 1;  // since cut aa ta aage jana..
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return high + 1 + k ; // low + k;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int k;
//     cin >> k;
//     int ans = findmissele(arr, n, k);
//     cout << ans;
//     return 0;
// }

// BS-17. Aggressive Cows | Binary Search Hard

// #include <bits/stdc++.h>
// using namespace std;

// bool canweplace(vector<int> arr, int n, int distance, int cows)
// {
//     int cntcows = 1;   // phela ek leli
//     int last = arr[0]; // 1 element te place kiti aa...
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] - last >= distance) // distance is mid
//         {
//             cntcows++;
//             last = arr[i];
//         }
//         if (cntcows >= cows) // okay from the given cows
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int maxdis(vector<int> arr, int n, int cows)
// {
//     sort(arr.begin(), arr.end());
//     int low = 1;// the least distaance can be 1
//     int high = arr[n - 1] - arr[0]; // it is the distance bt the two cows..
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (canweplace(arr, n, mid, cows) == true)
//         {                  // mid is the distance we have taken
//             low = mid + 1; // since we have to find max;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return high;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int cows;
//     cin >> cows;
//     int ans = maxdis(arr, n, cows); // distance ta apa find krna..
//     cout << ans;
//     return 0;
// }

// Book allocation

// #include <bits/stdc++.h>
// using namespace std;

// int noofstudents(vector<int> arr, int n, int mid)
// {
//     int stud = 1;
//     long long cntpages = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] + cntpages <= mid)
//         { // mid is the pages...
//             cntpages += arr[i];
//         }
//         else
//         {
//             stud++;
//             cntpages = arr[i];
//         }
//     }
//     return stud;
// }

// int leastnoofpages(vector<int> arr, int n, int m)
// {
//     if (m > n)
//     { // if no of students are greater than books
//         return -1;
//     }
//     int low = *max_element(arr.begin(), arr.end());
//     int high = accumulate(arr.begin(), arr.end(), 0);

//     while (low <= high)
//     {
//         int mid = (low + high) / 2; // since mid is finding pages..
//         int noofstud = noofstudents(arr, n, mid);
//         if (noofstud <= m)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int m;
//     cin >> m;
//     int ans = leastnoofpages(arr, n, m);
//     cout << ans;
//     return 0;
// }
// // Split array - Largest Sum and Painter's partition same as book allocation

//  Minimise Maximum Distance between Gas Stations Brute force

// #include <bits/stdc++.h>
// using namespace std;

// int mindis(vector<int> arr, int n, int k)
// {
//     vector<int> howmany(n - 1, 0);  //stores the indexes
//     for (int gasst = 0; gasst < k; gasst++) // since we have to put k inside arr
//     {
//         long double maxsectionlength = -1;
//         int maxind = -1;
//         for (int i = 0; i < n - 1; i++)
//         {
//             long double diff = arr[i + 1] - arr[i];
//             long double sectionlength = diff / (long double)(howmany[i] + 1); // since howmany[maxind]++ kri jane aa if sectionlength greater previous wale te aa ta combine nal divide krna
//             if (sectionlength > maxsectionlength)
//             {
//                 maxsectionlength = sectionlength;
//                 maxind = i;
//             }
//         }
//         howmany[maxind]++; // now it have value stored at max distance in section [1,0,0]
//     }
//     long double maxans = -1;
//     for (int i = 0; i < n - 1; i++)
//     {

//         long double diff = arr[i + 1] - arr[i];
//         long double sectionlength = diff / (long double)(howmany[i] + 1);
//         maxans = max(maxans, sectionlength);
//     }
//     return maxans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int k;
//     cin >> k;

//     int ans = mindis(arr, n, k);
//     cout << ans;
//     return 0;
// }

// Minimise Maximum Distance between Gas Stations Brute force Better solution using priority_queue..

// #include <bits/stdc++.h>
// using namespace std;

// long double mindis(vector<int> arr, int n, int k)
// {
//     vector<int> howmany(n - 1, 0);
//     priority_queue<pair<long double, int>> pq;
//     for (int i = 0; i < n - 1; i++)
//     {
//         pq.push({arr[i + 1] - arr[i], i}); // just storing
//     }
//     for (int gasSt = 0; gasSt < k; gasSt++)
//     {
//         auto tp = pq.top();  //iterator that will point to top()
//         pq.pop();
//         int secInd = tp.second; // top nu leya te oda index chakya te howmany vich plus krta..
//         howmany[secInd]++;      // 0 toh 1 krta initially..
//         long double iniDiff = arr[secInd + 1] - arr[secInd];
//         long double newSection = iniDiff / (long double)(howmany[secInd] + 1);
//         pq.push({newSection, secInd});  // it will be automatically sorted
//     }
//     return pq.top().first;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int k;
//     cin >> k; // gas stations
//     long double minimimdist = mindis(arr, n, k);
//     cout << minimimdist;
//     return 0;
// }

// Median of two Sorted Arrays of Different Sizes  optimal

// brute and better on notebook..

// #include <bits/stdc++.h>
// using namespace std;

// double median(vector<int> arr, vector<int> brr)
// {
//     int n1 = arr.size();
//     int n2 = brr.size();

//     if (n1 > n2)
//         return median(brr, arr); // bc we need small

//     int low = 0;
//     int high = n1;
//     int left = (n1 + n2 + 1) / 2; // left wala case (l1, l2) pointer wala..|| right wala case
//     int n = n1 + n2;
//     while (low <= high)
//     {
//         int mid1 = (low + high) / 2;
//         int mid2 = left - mid1;

//         int l1 = INT_MIN, r1 = INT_MAX;
//         int l2 = INT_MIN, r2 = INT_MAX;

//         if (mid1 < n1) // check the edge conditions..
//         {
//             r1 = arr[mid1];
//         }
//         if (mid2 < n2)
//         {
//             r2 = brr[mid2];
//         } // retain..
//         if (mid1 - 1 >= 0)
//         {
//             l1 = arr[mid1 - 1]; // see notes to see the position of l1 and l2 all will be clear
//         }
//         if (mid2 - 1 >= 0)
//         {
//             l2 = brr[mid2 - 1];
//         }
//         if (l1 <= r2 && l2 <= r1)
//         {
//             if (n % 2 == 1)
//             {
//                 return max(l1, l2);
//             }
//             return (double)((double)(max(l1, l2) + min(r1, r2)) / 2.0); // l1 l2 vich initial sorted store hoya so oh shote aa..
//         }
//         else if (l1 > r2)
//         {
//             high = mid1 - 1;
//         }
//         else
//         {
//             low = mid1 + 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n1;
//     cin >> n1;
//     vector<int> arr;
//     for (int i = 0; i < n1; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int n2;
//     cin >> n2;
//     vector<int> brr;
//     for (int i = 0; i < n2; i++)
//     {
//         int x;
//         cin >> x;
//         brr.push_back(x);
//     }

//     double ans = median(arr, brr);
//     cout << ans;
//     return 0;
// }

// Bs-22. K-th element of two sorted arrays | Binary Search Approach

// #include <bits/stdc++.h>
// using namespace std;

// int median(vector<int> arr, vector<int> brr, int n1, int n2, int k)
// {
//     if (n1 > n2)
//         return median(brr, arr, n2, n1, k); // bc we need small

//     int low = max(k - n1, 0); // atleast we rerure this for ex : 2 - 5 = -3 and max will pick from 0
//     int high = min(k, n1);
//     int left = k; // left wala case (l1, l2) pointer wala..|| right wala case
//     int n = n1 + n2;
//     while (low <= high)
//     {
//         int mid1 = (low + high) / 2;
//         int mid2 = left - mid1;

//         int l1 = INT_MIN, r1 = INT_MAX;
//         int l2 = INT_MIN, r2 = INT_MAX;

//         if (mid1 < n1) // check the edge conditions..
//         {
//             r1 = arr[mid1];
//         }
//         if (mid2 < n2)
//         {
//             r2 = brr[mid2];
//         } // retain..
//         if (mid1 - 1 >= 0)
//         {
//             l1 = arr[mid1 - 1]; // see notes to see the position of l1 and l2 all will be clear
//         }
//         if (mid2 - 1 >= 0)
//         {
//             l2 = brr[mid2 - 1];
//         }
//         if (l1 <= r2 && l2 <= r1)
//         {
//             return max(l1, l2);
//         }
//         else if (l1 > r2)
//         {
//             high = mid1 - 1;
//         }
//         else
//         {
//             low = mid1 + 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n1;
//     cin >> n1;
//     vector<int> arr;
//     for (int i = 0; i < n1; i++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int n2;
//     cin >> n2;
//     vector<int> brr;
//     for (int i = 0; i < n2; i++)
//     {
//         int x;
//         cin >> x;
//         brr.push_back(x);
//     }
//     int k;
//     cin >> k;
//     int ans = median(arr, brr, n1, n2, k);
//     cout << ans;
//     return 0;
// }

// Linked list

#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next; // node tahara da ptr banaya
public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertarrtoll(vector<int> &arr)
{
    Node *head = new Node(arr[0]); // constructor will be called...
    Node *mover = head;            // head will always point to first element...
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]); // second list will be created
        mover->next = temp;            // but the link will be made here..
        mover = temp;                  // then move mover to temp..
    }
    return head;
}

int ifpresent(Node *head, int ele)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == ele)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node *y = new Node(arr[0], nullptr); // Node tahra de ptr nu point krvona
    // cout << y << endl;                   // prints the address
    // cout << y->data << endl;
    // cout << y->next;
    Node *head = convertarrtoll(arr);
    // cout << head->data;

    Node *temp = head;
    int count = 0;
    // while (temp)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    //     count++;
    // }
    // cout << count;
    cout << ifpresent(head, 5);
    return 0;
}