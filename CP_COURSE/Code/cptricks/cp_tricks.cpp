// C++ Tricks for CP:

// 1. use ios_base::sync_with_stdio(false);
// It toggles on or off the synchronization of all the C++ standard
// streams with their corresponding standard C streams.

// 2. cin.tie(NULL); 
// tie() method that simply guarantees the flushing of std::cout before 
// std::cin accepts an input.

// 3. Using Typedef and Macros

// The template should be as:

#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline string InttoString(ll a){
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a){
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

inline string GetString(void){
    char x[1000005];
    scanf("%s",x);
    string s = x;
    return s;
}

inline string uppercase(string s){
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] >= 'a' && s[i]<='z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    return s;
}

inline string lowercase(string s){
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i] >= 'A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

int main(){
    //added the two lines below 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int n, k, t;
    // int cnt = 0;
    // cin >> n >> k;
    // for (int i=0; i<n; i++)
    // {
    // cin >> t;
    // if (t % k == 0)
    // cnt++;
    // }
    // cout << cnt << "\n";

    //IO Manipulation: 
    // 1. boolalpha: output boolean values as 'true' or 'false' instead of 0 and 1.
    cout << std::boolalpha << true <<"\n";
    // 2. showpoint: used to display decimal point in floating-point numbers
    cout << std::showpoint << 3.0 <<"\n";
    // 3. uppercase: output hexadecimal numbers in uppercase letters.
    cout << std::uppercase << 255 <<"\n";
    // 4. nouppercase: output hexadecimal numbers in lowercase letters.
    cout << std::nouppercase << 255 <<"\n";
    // 5. hex: output integer values in hexadecimal format.
    cout << std::hex << 255 <<"\n";
    // 6. dec: output integer values in decimal format.
    cout << std::dec << 255 <<"\n";
    // 7. oct: output integer values in octal format.
    cout << std::oct << 255 <<"\n";
    return 0;
}