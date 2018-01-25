#include <iostream>
using namespace std;
#include <unordered_map>
#include <sstream>

void printsubstrings(string &str ) { 
  
  for (int i =0;i<str.length()-2;i++) { 
    cout<<str.substr(i,3)<<endl;
  }
}

unordered_map <string,int> countWords(const string &str){ 
  
  stringstream ss(str);
  unordered_map <string,int> umap;
  string word;
  
  while (ss >> word) { 
    
    umap[word]++;
  }
  
  return umap;
  
  
}

int main() {
  std::cout << "Hello World!\n";
  string str = "12345";
  
  // 12 23 34 45 
  printsubstrings(str);
  
  str = "sowmya sowmya vijay sowmya vijay murali kiran";
  
  unordered_map <string,int> :: iterator it;
  unordered_map <string,int> umap;
  
  umap = countWords(str);
  for (it = umap.begin(); it != umap.end(); it++ ) { 
      cout<<it -> first <<" "<<it -> second<<endl;
  }
  
  str = "sowmya;kiran;vijay;murali";
  string delimeter = ";";
  
  while(str.find(delimeter) != -1) {
  
  size_t pos = str.find(delimeter);
  cout<<str.substr(0,pos)<<endl;
  str.erase(0,pos+delimeter.length());
  }
  cout<<str;
  
  
  
}
