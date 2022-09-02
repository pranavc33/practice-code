#include<iostream>
using namespace std;
int main(){



   int p,i=0,j=0,n=0,m=0;
    char a[30],b[30],c[30];
    cout<<"Enter the main string:";
    cin>>a;
    cout<<"Enter the position to insert the substring: ";
    cin>>p;
    cout<<"Enter the substring to be inserted:";
    cin>>b;
    while(a[n]!='\0') {
    while (a[n+1]!='\0'){
            n++;
        } 
    }
        cout<<"The length of the string is: "<<+1;
    while(a[m]!='\0'){
        while(a[m+1]!='\0'){
            m++;
        }
    }
        cout<<"The length of the string is: "<<m+1;
    while(i<p){
        a[j]=b[i];
        i++;
        j++;
    }
    i=0;
    while(i<=n)
    {
        c[j] = b[i];
        i++;
        j++;
    }
    i=0;
        for(i=p;i<=(n+m)-1;i++){
            c[j]=a[i];
            j++;
        }
   cout<<c;
}