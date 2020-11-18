# include <iostream>
# include <fstream> 
# include <cmath>

using namespace std;

int main() {
  // a)
  // input files
  ifstream fin("datensumme.txt"); // read file datensumme.txt with the fstream lib
  ifstream fin2("datensumme.txt");

  // output files
  ofstream fout_means("mittelwerte.txt"); // create output txt for means
  ofstream fout_vars("varianzen.txt"); // create output txt for variances

  int a, b;
  int total = 0;
  for (int i = 0; i < 26; i++) { // loop over the lines of fin
    double loop_total = 0;
    for (int j = 0; j < 9; j++) {
      fin >> a;
      loop_total += a;
    }

    double loop_mean = loop_total / 9.;

    double loop_total_variance = 0;
    for (int j = 0; j < 9; j++) {
      fin2 >> b;
      loop_total_variance += (b - loop_mean) * (b - loop_mean);
    }

    double loop_var = loop_total_variance / 9.;
    
    fout_means << loop_mean << endl;
    fout_vars << loop_var << endl;
  }
  fin.close();
  fin2.close();

  fout_means.close();
  fout_vars.close();


  // b)
  ifstream fin_means("mittelwerte.txt"); // read file 
  ifstream fin_vars("varianzen.txt"); // read file
  
  double mean_i, var_i;
  double mean_mean_total = 0;
  double var_mean_total = 0;

  for (int i = 0; i < 26; i++) { // loop over the lines of fin_means, fin_vars
    fin_means >> mean_i;
    fin_vars >> var_i;

    mean_mean_total += mean_i; 
    var_mean_total += var_i;
  }

  double mean_mean = mean_mean_total / 26.;
  double var_mean = var_mean_total / 26.;

  cout << mean_mean << endl;
  cout << var_mean * (9. / 8.) << endl;
}
