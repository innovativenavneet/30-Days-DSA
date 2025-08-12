//count frequency 
#include<iostream>
//I want to store result in sorted ascending order , I can also use unordered_mp if I don't care abt ascending order
#include<map>
#include<string> 
using namespace std; 

int main(){

string input ; 
cout<<"enter the string you want to count freq of :" <<endl;
cin >>input; 

//lets define an map to count freq
map<char,int > freq;


for(char i : input){
//freq counted in this way 
  freq[i]++;
}

for (auto & i : freq){
cout<<"the char : " <<i.first<< " the freq is :" << i.second<<endl;
}


return 0; 
}
