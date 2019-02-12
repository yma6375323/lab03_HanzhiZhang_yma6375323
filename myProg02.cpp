// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;
int main(int argc, char *argv[])
{
  string data;
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

 
  ifstream ifs;
  ifs.open(argv[1]);
  if(!ifs){
    cout<<"open fails"<<endl;
    exit(1);
  }
  cout<<"open "<<argv[1]<<" successfully!"<<endl;

  int animals=0;
  int NumberOfDucks=0;
  int notDucks=0; 
  while(ifs >> data){
    animals+=1;
    if(data=="duck"){
      NumberOfDucks+=1;
    }else{
      notDucks+=1;
    }
  }
  cout<<"Report for "<<argv[1]<<":"<<endl;
  cout<<" Animal count:    "<<animals<<endl;
  cout<<" Duck count:      "<<NumberOfDucks<<endl;
  cout<<" Non duck count:  "<<notDucks<<endl;

  return 0;
}
