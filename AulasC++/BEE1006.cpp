#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double A,B,C;
    cout << fixed << setprecision(1);
    cin >>A>>B>>C;
    cout << "MEDIA = " << ((A*2) + (B*3) + (C*5)) / (10)<< endl; 
    return 0;
}