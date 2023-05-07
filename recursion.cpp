// // tree recursion 
// #include<iostream>
// using namespace std;
// void fun(int n)
// {
//     if (n>0)
//     {
//         cout<<n;
//         fun(n-1);
//         fun(n-1);
//     }
// }
// int main()
// {
//     fun(3);
//     return 0;
// }

// i have to find sum of n natural no using recursion

// #include<iostream>
// using namespace std;
// int sum=0;
// int fun(int n)
// {
    
//     if (n>0)
//     {
        
//         sum=sum+n;
//         fun(n-1);
//     }
//     return sum;
    
// }
// // here u r not using recursion ur  trying to solve using loop while using recursion

// int main()
// {
//     int x;
//     cout<<"enter the nth no until addition is needed:"<<endl;
//     cin>>x;
//     int result =fun(x);
//     cout<<"so nth addition is :";
//     cout<<result;
// }

// so we have to learn properly how to use recursion

// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     if (n>0)
//     {
//         return sum(n-1)+n;
//     }
//     else
//     return 0;
// }
// int main()
// {
//     cout<<"enter the nth no:"<<endl;
//     int x;
//     cin>>x;
//     int result = sum(x);
//     cout<<"so the nth sum is:";
//     cout<<result;

// }

// code for writing factorial using recursion fn
// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//     if (n == 0) // base case: factorial of 0 is 1
//     {
//         return 1;
//     }
//     else if (n > 0)
//     {
//         return factorial(n-1)*n;
//     }
// }

// int main()
// {
//     cout<<"give nth no for its factorial:"<<endl;
//     int x;
//     cin>>x;
//     int result = factorial(x);
//     cout<<"result: "<<result<<endl;
//     return 0;
// }

// use recursion to find power

// #include<iostream>
// using namespace std;
// int power(int m , int n)
// {
//     if (n==0)
//     return 1;
//     else if (n>0)
//     return power(m,n-1)*m;
// }
// int main()
// {
//     int result = power(2,9);
//     cout<<result;
// }

