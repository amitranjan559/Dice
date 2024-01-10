#include<bits/stdc++.h>
using namespace std;
//PART-A
int main(){
    vector<int>diceA={1,2,3,4,5,6};
    vector<int>diceB={1,2,3,4,5,6};

    map<int,int>sumProb;
    int combination=1;

    for(int index=0;index<=5;index++){
        for(int j=0;j<=5;j++){
            int sum= diceA[index] + diceB[j];
            sumProb[sum]++;

            cout<<"combination: "<<combination<< endl;
            cout<< "diceA: "<< diceA[index]<< " diceB: "<<diceB[j]<<endl;
            cout<<"sum: "<<sum<<endl;
            cout<<'\n';
            combination++;
        }
    }
    cout<<"Total combinations possible are: "<<--combination<<endl;
    cout<<"Probability of all Possible Sums occurring among the number of combinations"<<endl;

    for(auto p:sumProb){
        cout<<"sum: "<< p.first <<" probability :"<< p.second <<"/36"<<endl;
    }
    return 0;
}
