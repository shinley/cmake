#include <iostream>
#define t_str(s) #s
#define conn(x,y) x##y
using namespace std;
#define WIN_64

#ifdef WIN_64
#define MAX_SIZE (2<<10)
#endif

int main() {

//    int abc = 10;
    int ab = 100;

    cout << t_str(10) << endl;
    cout << conn(a, b) << endl;

    cout << "Hello, World!" << endl;
    cout << MAX_SIZE << endl;
    return 0;
}
