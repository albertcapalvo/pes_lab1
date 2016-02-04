#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>

#include <iomanip>
#include <array>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>

int main()
{

using namespace std;

    float V[2][2] = {{0}};

float L1, L2, L3, S, r, p, rho ;


for (int i=0; i<=2; i++){

    for (int j=0; j<=2; j++){
        cout << "Please enter V"<<i+1<<j+1<<endl;
        cin >> V[j][i];

}
}

 L1=sqrt(pow(V[1][1]-V[2][1],2)+pow(V[1][2]-V[2][2],2)+pow(V[1][3]-V[2][3],2));
 //L2=sqrt(pow(V[2][1]-V[3][1],2)+pow(V[2][2]-V[3][2],2)+pow(V[2][3]-V[3][3],2));
 L2=sqrt(pow(V[1][2]-V[1][3],2)+pow(V[2][2]-V[2][3],2)+pow(V[3][2]-V[3][3],2));

 L3=sqrt(pow(V[3][1]-V[1][1],2)+pow(V[3][2]-V[1][2],2)+pow(V[3][3]-V[1][3],2));

cout<<L1<<" "<<L2<<" "<<L3<<endl;

S=abs(0.5*( V[1][1]*(V[2][2]*V[3][3]-V[2][3]*V[3][2])     -      V[1][2]*(V[2][1]*V[3][3]-V[2][3]*V[3][1])   +    V[1][3]*(V[2][1]*V[3][2]-V[2][2]*V[3][1])    ));
r=L1*L2*L3/S;

p=0.5*(L1+L2+L3);
rho=S/p;
cout<<"Area ="<<S<<endl;
cout<<"CIrcumradius ="<<r<<endl;
cout<<"Half perimeter is ="<<p<<endl;
cout<<"Inradious ="<<rho<<endl;

    system("pause");
    return 0;
}
