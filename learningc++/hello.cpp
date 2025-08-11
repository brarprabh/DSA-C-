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
//                 ls.push_back(n/i);
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
//     if(a == 0) cout << b;
//     else cout << a;
// }

// binary search

// # include <bits/stdc++.h>
// using namespace std;

// void binarySearch(int arr[], int n, int num ) {
//     int s = 0;
//     int l = n-1;
//     int mid;
//     while(s < l) {
//         mid = (s+l)/2;
//         if(arr[mid] == num) {
//             cout << "element found " <<mid+1<<endl;
//             break;
//         }
//         else if(arr[mid] < num) {
//             mid = s + 1;
//         }
//         else if(arr[mid] > num) {
//             mid = l - 1;
//         }
//     }
// }
// int main() {
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

// # include <bits/stdc++.h>
// using namespace std;
// int f(int i, string &s) {
//     if(i >= s.size()/2) {
//         return true;
//     }
//     if(s[i] != s[s.size() - i -1]) return false;

// return f(i+1, s);
// }
// int main() {
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

//     int hash[25] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cin >> q;

//     while (q--)
//     {
//         char ch;
//         cin >> ch;
//         cout << hash[ch - 'a']; // galti alert solved
//     }
//     return 0;
// }

// Hashing using maps

// # include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     // int q;
//     // cin >> q;

//     map<char, int> mpp;
//     for(int i = 0; i < s.size(); i++) {
//         mpp[s[i]]++;
//     }
//     int maxFreq = INT_MIN;
//     int minFreq = INT_MAX;
//     for(auto it : mpp) {
//         cout << it.first << "-->" << it.second << endl;
//         if(it.second > maxFreq){
//             maxFreq = it.second;
//         }
//         if(it.second < minFreq){
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

// # include <bits/stdc++.h>
// using namespace std;
// vector<int> greatest(vector<int> &a, int n) {
//     int largest = INT_MIN;
//     int slargest = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         if(a[i] > largest) {
//             slargest = largest;
//             largest = a[i];
//         }
//         else if(a[i] < largest && a[i] > slargest) slargest = a[i];
//     }
//     return {largest, slargest};
// }
// vector<int> answer(vector<int> &a, int n)
// {
//   return  greatest(a, n);
// }
// int main() {
//     int n;
//     cin>>n;

//     // int arr[n];
//     // for(int i = 0; i < n; i++){
//     //     cin >> arr[i];
//     //}
//     vector<int> arr;  // no need to use[]
// for(int i = 0; i < n; i++) {
//     int x;
//     cin >> x;
//     arr.push_back(x);  // insert will not work
// }

//   vector<int> ans = answer(arr, n);   //jive structure hunda si
//   cout << ans[0] << " " << ans[1];
//     return 0;
// }

// rotate array by d elements

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
//         arr[i] = temp[i - (n-d)];   // temp vich 0 toh store aa...
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

// # include <bits/stdc++.h>
// using namespace std;
//  vector<int> move(vector<int> &arr, int n) {
//     int j = -1;   // we dont know the position of j
//     for(int i= 0; i < n; i++) {
//         if(arr[i] == 0){ j = i;
//         break;}
//     }
//     for(int i = j + 1; i < n; i++) {
//         if(arr[i]!=0) {
//             swap(arr[i], arr[j]); j++;
//     }
//  }
//  return arr;
// }
// int main() {
//     int n; cin >>n;
//     vector<int> arr;
//     for(int i =0; i < n; i++) {
//         int x; cin >> x;
//         arr.push_back(x);
//     }
//     vector<int> result = move(arr, n);
//     for(auto it : result) cout << it << " ";
//     return 0;
// }

// Union using 2 pointer approach

// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the union of two sorted arrays
// vector<int> findUnion(const vector<int>& arr, const vector<int>& brr) {
//     int i = 0, j = 0;
//     vector<int> result;
//     int n1 = arr.size(), n2 = brr.size();

//     while (i < n1 && j < n2) {
//         // Avoid duplicates in result
//         int val;
//         if (arr[i] < brr[j]) {
//             val = arr[i++];
//         } else if (arr[i] > brr[j]) {
//             val = brr[j++];
//         } else {
//             val = arr[i++];
//             j++;
//         }
//         if (result.empty() || result.back() != val)
//             result.push_back(val);
//     }
//     // Add remaining elements from arr
//     while (i < n1) {
//         if (result.empty() || result.back() != arr[i])
//             result.push_back(arr[i]);
//         i++;
//     }
//     // Add remaining elements from brr
//     while (j < n2) {
//         if (result.empty() || result.back() != brr[j])
//             result.push_back(brr[j]);
//         j++;
//     }
//     return result;
// }

// int main() {
//     int n1, n2;
//     cin >> n1;
//     vector<int> arr(n1);
//     for (int i = 0; i < n1; i++) cin >> arr[i];

//     cin >> n2;
//     vector<int> brr(n2);
//     for (int i = 0; i < n2; i++) cin >> brr[i];

//     vector<int> result = findUnion(arr, brr);
//     for (int num : result) cout << num << " ";
//     return 0;
// }

// Intersection

// # include<bits/stdc++.h>
// using namespace std;

// vector<int> intersectionarr(vector<int> arr, vector<int> brr, int n1, int n2) {
//       int i = 0;
//       int j = 0;
//       vector<int>insertarr;
//       while(i < n1 && j < n2) {
//         if(arr[i] < brr[j]) i++;

//       else if(arr[i] > brr[j]) j++;
//     else
//     {
//         insertarr.push_back(arr[i]);
//         i++; j++;
//     }

//     }
//     return insertarr;
// }
// int main() {
//     int n1;
//     cin >> n1;
//     vector<int> arr;
//     for(int i = 0; i < n1; i++) {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     int n2;
//     cin >> n2;
//     vector<int> brr;
//     for(int i = 0; i < n2; i++) {
//         int y;
//         cin >> y;
//         brr.push_back(y);
//     }
//     vector<int> result = intersectionarr(arr, brr, n1, n2);
//     for(auto it : result) {
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
//         ans.push_back(Xor1 ^ Xor2);
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

// Sub array

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
//         while (sum > k && left <= right)
//         {
//             sum -= arr[left];
//             left++;
//         }
//         if (sum == k)
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
// vector<int> twosum(vector<int> arr, int n, int target)
// {
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int more = target - num;
//         if (mpp.find(more) != mpp.end())
//         {
//             cout << "Yes" << endl;
//             return {mpp[more], i};
//         }
//         mpp[i] = num; // index ta store krna hi aa na...
//     }
//     return {-1, -1};
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
//     vector<int> answer = twosum(arr, n, target);
//     for (auto it : answer)
//     {
//         cout << it << " ";
//     }
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

// Finding majority elements

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
//         if (it.second > n / 2)
//         {
//             cout << it.first;
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

// majority element using moore algorithm

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
//         return el;
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
//             start = i;
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
//}

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
//}

// Next_Permutations..

// #include <bits/stdc++.h>
// using namespace std;
// void per(vector<int> &arr, int n)
// {
//     int index = -1;
//     for (int i = n - 2; i > 0; i--)
//     {
//         if (arr[i] < arr[i + 1])
//         {
//             index = i;
//             break;
//         }
//     }
//     if (index == -1)
//         reverse(arr.begin(), arr.end());
//     for (int i = n - 1; i > index; i--)
//     {
//         if (arr[i] > arr[index])
//         {
//             swap(arr[i], arr[index]);
//         } // since ek element nal swap krna
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
//                 matrix[i][0] = 0;
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }
//     for (int i = 1; i < n; i++)  // except decided row 0 and col 0 all are made zero
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

//             matrix[0][j] == 0;
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

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         reverse(matrix[i].begin(), matrix[i].end());
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
//         if (top <= bottom)  // this should be present for the next occurance..
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
//         int pindex = partion(n, arr, low, high);
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
//}

// pascal triangle

// class Solution {
// public:
//     vector<int> generaterows(int rows) {
//         vector<int> result;
//     long long answer = 1;
//         result.push_back(answer);
//         for(int col = 1; col < rows; col++) {
//             answer = answer * (rows-col);
//             answer = answer / col;
//             result.push_back(answer);
//         }
//         return result;
//     }

//     vector<vector<int>> generate(int numRows) {
//           vector<vector<int>> answer;
//         for(int i = 1; i <= numRows; i++) {
//              answer.push_back(generaterows(i));
//         }
//         return answer;
//     }
// };

// single row of pascal triangle
