#include<bits/stdc++.h>
using namespace std;
//PART-B

void probability(vector<int>&diceA,vector<int>&diceB,unordered_map<int,int>&sumProb ){
 
    for(int index=0;index<=5;index++){
        for(int j=0;j<=5;j++){
            int sum= diceA[index] + diceB[j];
            sumProb[sum]++;
        }
    }
}

int main(){
    vector<int>diceA={1,2,3,4,5,6};
    vector<int>diceB={1,2,3,4,5,6};
    unordered_map<int,int>sumProb;

    probability(diceA,diceB,sumProb);

 
    // the possible sum combination from diceA and diceB is from 2-12;

    for(int sum=2;sum<=12;sum++){
        vector<int>newDice_A(6,4);
        vector<int>newDice_B(6,0);

        int prob= sumProb[sum];

        if(sum <=4){
            int val=sum-1;
            int v= sum-val;
            cout<<"sum: "<<sum<<" | Number of combination is: "<<sumProb[sum]<<endl;
            for(int index=0;index<=5;index++){
                newDice_A[index]=val--;
                if(val==0)break;
            }
            cout<<"NewDice_A: ";
            for(auto a:newDice_A){cout<<a<<" ";}cout<<endl;

            for(int index=0;index<=5;index++){
                newDice_B[index]=v++;
            }
            cout<<"NewDice_B: ";
            for(auto a:newDice_B){cout<<a<<" ";}cout<<endl;
            cout<<'\n';
        }
        else if(sum >4){
            int val=3;
            int v= sum-val;
            int p=sumProb[sum];
            cout<<"sum: "<<sum<<" | Number of combination is: "<<sumProb[sum]<<endl;
            for(int index=0;index<=5;index++){
                newDice_A[index]=val--;
                p--;
                if(val==0){val=1;}
                if(!p)break;
            }
            cout<<"NewDice_A: ";
            for(auto a:newDice_A){cout<<a<<" ";}cout<<endl;

            for(int index=0;index<=5;index++){
                newDice_B[index]=v++;
            }
            cout<<"NewDice_B: ";
            for(auto a:newDice_B){cout<<a<<" ";}cout<<endl;
            cout<<'\n';
        }
    }
    return 0;
}

