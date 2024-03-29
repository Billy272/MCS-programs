// SCT-254-023/2021
// SCT-254-035/2021
// SCT-254-037/2021
// SCT-254-075/2018
// SCT-254-004/2020


//Single Queue Simulations

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int i, j, run = 10;
    double x, x1, x2, st, awt, pcu, wt = 0, iat = 0, it;
    double mean = 10, sd = 1.5, mue = 9.5, sigma = 1.0;
    double sb = 0, se = 0, cit = 0, cat = 0, cwt = 0;
    // sb = begin time, se = end time, cit = idle time, cat = arrival_time, cwt= waiting_time
        ofstream outfile("output.txt", ios::out);
    outfile << "\ni r' Int-ArrT Arr_Time Sml_Begin r' Start_Time End_time Waiting_Time Idle_Time \n";
    for (j = 1; j<= run; j++){
        //Generating inter arrival time
        double sum = 0;
        for(i = 1; i<= 12; i++) {
            x = rand()/(double)RAND_MAX;
            sum += x;
        }
        x1 = mean + sd * (sum - 6);
        iat = x1;
        //cout<<"iat = "<<iat;
        cat += iat;
        //cout<<"cat = "<<cat;
        if(cat <= se){
            sb = se;
            wt = se - cat;
            cwt = cwt + wt;
            // cout<<"cwt = "<<cwt;
        }
        else{
            sb =cat;
            double it = sb - se;
            cit = cit + it;
        }
        //Generating service time
        sum = 0;
        for(i=1;i<=12;i++){
            x = rand()/(double)RAND_MAX;
            sum += x;
            x2 = mue + sigma * (sum - 6);
            st = x2;
            se = sb + st;
        }
        outfile<<j<<'\t'<<setprecision(4)<<x1<<'\t'<<setprecision(4)<<iat<<'\t'<<setprecision(4)
        <<cat<<'\t'<<setprecision(4)<<sb<<'\t'<<setprecision(4)<<x2<<'\t'<<setprecision(4)<<st<<
        '\t'<<setprecision(4)<<se<<'\t'<<setprecision(4)<<se<<'\t'<<setprecision(4)<<wt<<'\t'<<
        setprecision(4)<<it<<'\n';
    }
    awt = cwt/run;
    pcu = (cat - cit)*100/cat;
    outfile<<"Average waiting time\n";
    outfile<<awt;
    outfile<<"\nPercentage capacity utilization\n"<<pcu;

    return 0;
}