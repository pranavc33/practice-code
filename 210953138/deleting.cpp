#include<iostream>
using namespace std;

int main(){
    char str1[20], str2[20];
    int p, i, n;

    cout << "Enter the string: ";
    cin>> str1;

    for(int i=0; str1[i] != '\0'; i++);
    i++;

    cout << "Enter the position from where string is to be deleted:";
    cin >> p;

cout<< "Enter number of characters to be deleted";
cin >> n;

for(int i= p-1; str1[i] != 0 ; i++){
    str1[i] = str1[i+n];
}
cout << "The new string is: " << str1;



}