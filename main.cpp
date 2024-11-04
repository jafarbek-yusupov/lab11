#include <iostream>
using namespace std;

// HW
void problem1() {
    int n, s=0; cin >> n;
    int a[n], a1[n];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    for(int i = 0; i < n; i++){ cin >> a1[i];}
    for(int i=0; i<n; i++){    s+= a[i]*a1[i];}
    cout << s << endl;
}

int problem2() {
    int n;  cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    for (int i = 0; i < n; i++) {
        bool isDivisor = true;
        for (int j = 0; j < n; j++) {
            if (a[j] % a[i] != 0) {
                isDivisor = false;
                break;
            }
        }
        if (isDivisor) return a[i];
    }
    return -1;
}

void problem3() {
    int n, r=0;  cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){ cin >> a[i]; r ^=a[i];}
    cout << r << endl;
}

int problem4() {
    int n, prf = 0;  cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){ cin >> a[i];}
    int mn = a[0];
    for(int i = 0; i<n; i++){
        prf = max(prf, a[i] - mn);
        mn = min(mn, a[i]);
    }
    cout << prf << endl;
    return 0;
}

void problem5() {
    string a;   cin >> a;
    int uc=0, lc=0, n=a.size();
    for (int i=0; i<n; i++){    a[i]>='a' && a[i]<='z' ? lc++ : uc++;}
    cout << uc << " ";
    for(int i = 0; i < n; i++){ if(a[i]>='A' && a[i]<='Z'){ cout << a[i] << " ";}}
    cout << endl << lc << " ";
    for(int i = 0; i < n; i++){ if(a[i]>='a' && a[i]<='z'){ cout << a[i] << " ";}}
}

int main() {
    int n, prf = 0;  cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){ cin >> a[i];}
    int mn = a[0];
    for(int i = 0; i<n; i++){
        prf = max(prf, a[i] - mn);
        mn = min(mn, a[i]);
    }
    cout << prf << endl;
    return 0;
}