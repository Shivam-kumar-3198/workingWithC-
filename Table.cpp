#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the range :";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of Array :";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    cout<<"Elements of  Array :";
    for(int i =  0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
}