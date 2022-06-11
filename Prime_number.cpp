#include<iostream>
using namespace std;
int check(int a)
{
    int flag;
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    cin>>a;
    if(check(a) == 1)
    {
        cout<<"It is Prime Number"<<endl;
    }
    else
    {
        cout<<"It is not Prime Number"<<endl;
    }

    return 0;
    
}