#include<iostream>
using namespace std;
int main()
{
    int x,j,r,A,cost,sumNo=0,sumcost=0,No,a=2000;
    for(x=0;x<=7;x++)
    {
        cout<<"enter the values of j&r"<<endl;
        cin>>j>>r;
        A=j*r;
        if(x<2)
        {
            No=A/(3*3);
            cost=No*300;
            cout<<"Number of tiles in building="<<No<<endl;
            cout<<"cost of tiles in building"<<cost<<endl;
            sumcost=sumcost+cost;
            sumNo=sumNo+No;
            cout<<"totalnumber of tiles installed"<<sumNo<<endl;
            cout<<"total codt of tiles installed"<<sumcost<<endl;
        }
        else if((x==3)||(x==4))
        {
            No=A/(2.5*2.5);
            cost=No*200;
            cout<<"number of tilesin building"<<No<<endl;
            cout<<"total cost of tilesin building"<<cost<<endl;
            sumcost=sumcost+cost;
            sumNo=sumNo+cost;
            cout<<"total number of tiles installed"<<sumNo<<endl;
            cout<<"totalcost of tiles installed"<<sumcost<<endl;
        }
        else
        {
            No=A/(6*6);
            cost=No*2000;
            cout<<"number of tiles in building"<<No<<endl;
            cout<<"cost of titles in building"<<cost<<endl;
            sumcost=sumcost+cost;
            sumNo=sumNo+No;
            cout<<"total number of tiles installed"<<sumNo<<endl;
            cout<<"total cost of tiles installed"<<sumcost<<endl;
        }
    }
    cout<<"sumNo="<<sumNo<<endl;
    cout<<"sumcost="<<sumcost<<endl;

return 0;
}
