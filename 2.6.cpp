#include <iostream>

using namespace std;
int main() {
  long num;
  int counter=0;
  while (true){
    cin >> num;
    while (num!=1){
      if (num%2==0){
        num=num/2;
      }else if (num%2!=0){
        num=3*num+1;
      }
      cout << num << endl;
      counter++;
    }
    cout << "Steps = ";
    cout << counter << endl;
  }
}
