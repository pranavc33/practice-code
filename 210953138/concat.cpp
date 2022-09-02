
#include<iostream>
using namespace std;

int main(){
    char str1[50], str2[50], str3[50];
    int i=0, j= 0;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;
while(str1[i] != '\0') {
    str3[j] = str1[i];
i++;
j++;
}
i=0;

while (str2[j] != '\0') {
    str3[j] = str2[i];
    i++;
    j++;

 }
 str3[j] = '\0';


cout << "Concatenated string is: " << str3;
return 0;
}

