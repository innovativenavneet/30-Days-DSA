#include <iostream>
#include <unordered_map>
#include <string>

using namespace std; 

int main () {
// initialization 

unordered_map<int , string> colors = {
{1 , "red" },
{2 , "blue"},
{4 , "black" },
}; 

for ( auto & i: colors){
cout<<"the indices " <<i.first<<" "<<" and the value is " <<i.second<<endl;
}

return 0 ; 
}