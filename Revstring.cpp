//Reversing String using recursion
#include<iostream>
#include<algorithm>
using namespace std;
void rev(int i, int j,string& s)  //amp. used for pass by reference. The called function can modify the value of the argument by using its reference passed in.
{
    if(i>j)
        return ;
    else
    {
        swap(s[i],s[j]);
        i++;
        j--;
        rev(i,j,s);
    }
}
int main()
{
    int i=0,j=0;
    string s;
    cout<<"Enter String: ";
    cin>>s;
    j=s.length()-1;
    rev(i,j,s);
    cout<<"Reversed String is: "<<s<<endl;
return 0;
}
//Note: Call by Reference helps alter the original string instead of a copy of it.
