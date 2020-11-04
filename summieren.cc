# include <iostream>
# include <fstream> 

using namespace std;

int main() {
// Discord?yes!
// Already sent invite
  ifstream fin("daten.txt");
  int a, b;
  fin >> a;
  fin >> b;
  fin.close();
  cout << a << " " << b << endl;

}

