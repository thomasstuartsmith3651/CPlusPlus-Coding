
//c++ library
#include <iostream>
using namespace std;

//c++ define
const short N = 40;

//inlining sum
inline int
sum(int*p,int n,int d[])
{
    *p = 0;
    //can initialise locally
    for(int i=0;i<n;i++) *p = *p +d[i];
    return (*p);
}

int main()
{
    int accum = 0;
    int data[N];
    //creating consecutive array
    for(int i =0;i<N;i++) data[i] = i;
    accum = sum(&accum,N,data);
    // cout instead of printf
    cout << "Sum: " << accum << endl;

    return 0;
    
}