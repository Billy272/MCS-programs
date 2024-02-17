//Single Queue Simulations

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <conio>
#include <iomanip>

void main(void){
    int i, j, run = 10;
    double x, x1, x2, st, awt, pcu, wt = 0, iat = 0, it;
    double mean = 10, sd = 1.5, mue = 9.5, sigma = 1.0;
    double sb = 0, se = 0, cit = 0, cat = 0, cwt = 0;
        ofstream outfile("output.txt", ios::out);
    outfile << "\ni r' IAT CAT SB r' ST SE WT IT \n";
    for (j = 1; j<= run; j++){
        //Generating inter arrival time
        double sum = 0;
        for(i = 1; i<= 12; i++) {
            x = rand()/32768.0;
            sum += x;
        }
        x1 = mean + sd * (sum - 6);
        iat = x1;
        //cout<<"iat = "<<iat;
        cat += iat;
        //cout<<"cat = "<<cat;
        
    }
}