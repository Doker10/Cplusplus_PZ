2.6
#include <iostream>
using namespace std;
int main(void) {
    long c0;
    int elemetn;
    
   while (true){
    cin >> c0;
    while (c0!=1){
      if (c0%2==0){
        c0=c0/2;
      }else if (c0%2!=0){
        c0=3*c0+1;
      }
      cout << c0 << endl;
      elemetn++;
    }
    cout << "Steps = ";
    cout << elemetn << endl;
    elemetn = 0;
  }
    
    
    return 0;
}
2.10
  #include <iostream>
using namespace std;
int main(void) {
cout<<"Enter number: "<<'\n';
int x=0;

w:cin>>x;
while(x<10 && x>-1){
  
   
    
cout << '+';
for(int i = 0; i < x; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < x; i++) {
cout << '|';
for(int j = 0; j < x; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < x; i++)
cout << '-';
cout << '+' << endl;
return 0;}
cout<<"Enter number 1-10: "<<'\n';
goto w;
}
