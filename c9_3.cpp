/*Saanvi
23070123110
entc b2 */
#include <iostream> 
using namespace std; 

int main() 
{
    int* p=new int[7];

    for (int i=0; i<5; i++)
    {
        p[i]=10*(i+1);
    }

    cout<<*p<<"\n"; 
    cout<<*p+1<<"\n";
    cout<<*(p+1)<<"\n";
    cout<<2[p]<<"\n";
    cout<<p[2]<<"\n";
    *p++;

    cout<<*p;

    return 0; 
}
