// #include<iostream>
// using namespace std;
// int e(int x, int n)
// {
//     static int p=1,f=1;
//     int r;
//     if (n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         r=e(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+p/f;
//     }
// }
// int main()
// {
//     int r=e(3,2);
//     cout<<r;
// }


#include<iostream>
using namespace std;
void TOH(int n, int A,int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A ,C ,B);
        printf("from %d to %d",A,C);
        TOH(n-1,B,A,C);
    }
}

int main()
{
    TOH(3,1,2,3);
}