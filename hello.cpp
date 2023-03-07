#include <iostream>
using namespace std; 
#include <string> 

int main() 
{ 
  string userName; 
  string relativeName; 

  cout << "Enter your name:" << endl; 
  cin >> userName; 
  cout << "Enter a relative:" << endl; 
  cin >> relativeName; 
  cout << "Hello. My name is " << userName << ". You killed my " << relativeName << ". Prepare to die." << endl; 

    return 0; 
}
