#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){
    int count = 0;
    double sum = 0;
    ifstream source("score.txt");
    string t;
    cout << "Number of data = ";
    while(getline(source,t)){
        sum += atof(t.c_str());
        count++;
    }
    cout << count << endl;
    cout << setprecision(3);
    double mean = sum/count;
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = ";
    double sd,y;
    getline(source,t);
    double x = atof(t.c_str());
    for(int i = 0; i < count; i++){
        y += pow(x,2);
    }
    sd = (y/count) - pow(mean,2);
    cout << sd;



    
    

}