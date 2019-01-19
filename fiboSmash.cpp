// Would just like to comment to say that I know this is going to overflow, and I know it's not going to actually get the fibonacci number...
// ...but it's just so fun to watch a program utilize 4GB (that I allocated myself) and then free it all.
// System Requirements:
//      -a fast CPU
//      -at least 8GB RAM (4 bytes per integer * 2147483647 integers)
//      -maybe the sense to not run the executable of this...

// UPDATE: May as well throw ni some IO utilization as well...right?


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream output("fibo_trash.txt");
    int* max = (int*) malloc(sizeof(int));
    max[0] = 2147483647;
    unsigned int* n = (unsigned int*) malloc(max[0] * sizeof(unsigned int));
    n[0] = 1;
    n[1] = 1;
    cout << 1 << endl << 1 << endl;
    for (int i = 2; i < 2147483647; i++)
    {
        n[i] = n[i - 1] + n[i - 2];
        cout << n[i] << endl;
        output << n[i] << endl;
    }
    output.close();
    free(n);
    return 0;
} 