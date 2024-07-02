#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double raio, n;
    cin >> raio;
     n = 3.14159 * raio * raio;
    cout << "A=" << fixed << setprecision(5) << n << endl;  
    
    return 0;
}
