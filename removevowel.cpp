#include <iostream>
#include <cstring>
using namespace std;
  
int isVowel(char ch);
 
int main(){
    char input[100], output[100];
    int i, j, writeIndex;
     
    cout << "Enter a string \n";
    cin.getline(input, 500);
     
    for(i = 0, j = 0; input[i] != '\0'; i++){
        if(!isVowel(input[i])){
                       output[j++] = input[i];
        }
    }
    output[j] = '\0';
      
    cout << "Input String: " << input << endl;
    cout << "String without Vowels: " << output;
      
    return 0;
}
  int isVowel(char ch){
    switch(ch) {
     case 'a':
     case 'e':
     case 'i':
     case 'o':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U': {
        return 1;
    break;
   }
        default :
    return 0;
    }
}
