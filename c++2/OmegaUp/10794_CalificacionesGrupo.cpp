#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t,r,ap=0,rp=0;
    double x,s=0,m=0;
    cin>>t;
    r=t;
    string s1,s2,s3,s4;
    vector <string>vt;
    while (t--)
    {
        cin>>s1>>s2;
        cin.ignore();
        cin>>x; 
        if(x<=100){
            s+=x;
            if(x>=60){
                ap++;
            }
            if(x<60){
                rp++;
            }
            if(m==0){
                m=x;
                s3=s1+" "+s2;
                vt.push_back(s3);
            }
            if(x>=m){
                m=x;
                s3=s1+" "+s2;
                vt.push_back(s3);
            }
        }
        else{
            cout<<"UPS, ERROR!, DIGITE DE NUEVO LA CALIFICACION DE "<<s1<<" "<<s2<<"\n";
            cin>>x;
            s+=x;
            if(x>=60){
                ap++;
            }
            if(x<60){
                rp++;
            }
            if(m==0){
                m=x;
                s3=s1+" "+s2;
                vt.push_back(s3);
            }
            if(x>=m){
                m=x;
                s3=s1+" "+s2;
                vt.push_back(s3);
            }
        }
    }
    cout<<"PROMEDIO GRUPAL: ";
    printf("%.2f \n",(s/r));
    cout<<"ALUMNOS APROBADOS "<<ap<<"\n";
    cout<<"ALUMNOS REPROBADOS "<<rp<<"\n";
    sort(vt.begin(), vt.end());
    for(string e: vt){
        cout<<e<<"\n";
    }
    return 0;
}