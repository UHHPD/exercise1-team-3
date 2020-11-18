# include <iostream>
# include <fstream> 
# include <cmath>

using namespace std;

int main() {
  // a)
  ifstream fin("datensumme.txt"); // read file datensumme.txt with the fstream lib
  int a;
  int total = 0;
  for (int i = 0; i < 234; i++) { // loop over the lines of fin
    fin >> a;
    total += a;
  }
  fin.close();

  float mean = total / 234.;
  cout << mean << endl;

  // b)
  ifstream fin2("datensumme.txt"); // read file datensumme.txt with the fstream lib
  int b;
  float total_variances = 0;
  for (int i = 0; i < 234; i++) { // loop over the lines of fin2
    fin2 >> b;
    total_variances += (b - mean) * (b - mean);
  }
  float variance = total_variances / 234.;
  cout << variance << endl;
  
  // c)
  cout << sqrt(variance) << endl;
}
