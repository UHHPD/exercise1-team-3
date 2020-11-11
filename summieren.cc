# include <iostream>
# include <fstream> 

using namespace std;

int main() {

  ifstream fin("daten.txt"); // read file daten.txt with the fstream lib
  ofstream fout("datensumme.txt"); // create output.txt
  int a, b;
  for (int i; i < 234; i++) { // loop over the lines of fin
    fin >> a;
    fin >> b;
    int result = a + b;
    cout << result << endl; // print result
    fout << result << endl; // store the summ of a and b in fout
    if (i != 233) {
      fout << "\r\n";
    }
    /*
    Set linebreak accoring to the testfile!
    */
  }
  fin.close();
  fout.close(); // close the files
}
