#include <iostream>

using namespace std;
void forfun(const int *a,int *b)
{
    for(; a != b; a++)
    {
        cout << *a << endl;

    }
}
int main()
{
    int a[5]=  {4, 7, 9, 3, 1};

    forfun(a,a+5);
    return 0;
}