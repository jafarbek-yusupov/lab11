#include <float.h>
#include <iostream>
using namespace std;

void problem1() {
    int n, s=0;  cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){ cin >> arr[i]; s+=arr[i]; }
    cout << s << endl;
}

void problem2() {
    int n, s=0;  cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){ cin >> arr[i]; s+=arr[i]; }
    cout << double(s)/n << endl;
}

void problem3() {
    int n, min=INT_MAX;  cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){ cin >> arr[i]; min = min>arr[i]? min : arr[i]; }
    cout << min << endl;
}

// int indexOfLargestElement(double array[], int size)
void problem4() {
    int n, mxi=0;  cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++){ cin >> arr[i]; mxi = arr[mxi]<=arr[i] ? i : mxi; }
    cout << mxi << endl;
}

void problem5() {

}

// ROLLING A DICE
void problem8() {
    int c[6] = {0,0,0,0,0,0};
    srand(time(0));
    for (int i = 0; i < 10000; i++){ c[rand()%6]++; }
    for (int i = 0; i < 6; i++){ cout << c[i] << " "; }
}
// reverseArray
void problem9(int arr[], int start, int end) {
    int size = end - start + 1;
    while(start!=end){
        arr[start] += arr[end];
        arr[end] = arr[start]-arr[end];
        arr[start] -= arr[end];
        start++;    end--;
    }
    for (int i = 0; i < size; i++){ cout << arr[i] << " "; }
}

void problem10() {
    string s; getline(cin, s);
    int c[26] = {0};
    for(int i = 0; i < s.length(); i++){ c[int(s[i]-'A')]++; }
    int cnt=0;
    for (int i = 0; i < 26; i++){ if(c[i]!=0){   cnt++;} }
    cout << cnt << endl;
}

void problem11() {
    int n, c=0; cin >> n;
    cout << c << endl;
    for(int i=0; i<=n; i++){    string s;  getline(cin, s); c += (s[1] == '+') ? 1 : -1;}
    cout << c+1 << endl;
};

void problem13() {
    string s;   getline(cin,s);
    int lc=0, uc=0;
    for (int i = 0; i < s.length(); i++){ s[i]>='A' && s[i]<='Z' ? : uc++ : lc++; }

}
//PROBLEM 13
string transformWord(const string& word) {
    int upperCount = 0, lowerCount = 0;

    // Count uppercase and lowercase letters
    for (char c : word) {
        if (isupper(c)) upperCount++;
        else if (islower(c)) lowerCount++;
    }

    // Determine the case transformation
    string transformedWord;
    if (upperCount > lowerCount) {
        for (char c : word) transformedWord += toupper(c);
    } else {
        for (char c : word) transformedWord += tolower(c);
    }
    return transformedWord;
}


int main() {
    int a[5]={1,2,3,5,6};
    problem10();
    return 0;
}
