#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    ifstream source;
	ofstream dest;
	source.open("score.txt");
	dest.open("lab10_3.cpp");
	double ans=0;
	int count=0;
	string aaa;
	double sd;
	double a[1000]={1};
	while(getline(source,aaa))
	{
	    ans+=atof(aaa.c_str());
	    a[count]=atof(aaa.c_str());
	    count++;
	}
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<ans/(count)<<"\n";
    for(int i=0;i<=count;i++)
    {
        sd+=pow(a[i],2);
    }
    cout << "Standard deviation = "<<sqrt((sd/(count))-pow((ans/(count)),2));
    source.close();
    dest.close();
	return 0;
}