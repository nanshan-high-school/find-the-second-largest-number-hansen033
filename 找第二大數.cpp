#include <iostream>
using namespace std;

int main() {
  int a, x, f = -2147483648, s = -2147483648;
  cout << "你的陣列有幾個項?";
  cin >> a;
  for ( int t = 0 ; t < a ; t ++ ){
    cout << "輸入第" << t + 1 << "個數";
    cin >> x;
    if ( x > f ){
      s = f;
      f = x;
    } else if (x > s){
      s = x;
    }
  }
  cout << "\n第二大的數是" << s;
}
