#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int maiorstring(int n, string s[n]) {
  int maior = 0;
  
  for (int i = 0; i < n; i++) {
    if (s[i].size() > maior)
      maior = s[i].size();
  }

  return maior;
}

int main() {
  int n;
  
  cin >> n;
  
  string s[n];
  int nFinal[n];
  
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    }
    stringstream ss[n][maiorstring(n,s)];
    int num[n][maiorstring(n,s)];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < s[i].size(); j++){
      if (s[i][j] > 57) {
        num[i][j] = s[i][j] - 55;
        } 
        else {
          ss[i][j] << s[i][j];
          ss[i][j] >> num[i][j];
      }
    }
  }

  for (int i = 0; i < n; i++)
    nFinal[i] = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < s[i].size(); j++){
      nFinal[i] = nFinal[i] + num[i][j] * pow(16, s[i].size() - 1 - j);
    }
    cout << nFinal[i];
    cout << "\n";
  }
  
  return 0;
}
