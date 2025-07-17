#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number" << endl;
    cin >> n;

    string ans = "";

    while (n != 0) {
        int temp = n%2;
        ans.push_back(temp + '0');
        n = n/2;
    }
    int i =0;
    int j = ans.size() - 1;

    while (i <= j) {
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
    cout << "binary notation of given number is : " << ans << endl;
    return 0;
}
