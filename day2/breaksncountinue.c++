#include <iostream>

using namespace std;

int main()
{
  // code with haarry example
  // for (int i = 0; i < 1001; i++)
  // {
  //   cout<<i<<endl;
  //   if (i==100000){
  //     break;

  //   }
  // }
  // apna collage example
  int numbers;
  cin>>numbers;
  for (int i  = 0; i < numbers; i++)
  {
    if(numbers%i==0){
      cout<<"No Prime Numbers!"<<endl;
      break;
    }
    
  }
  
  
  
  
  return 0;
}