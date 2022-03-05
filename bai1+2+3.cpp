#include <iostream>
#include <math.h>
using namespace std;
struct PHANSO
{
    int ts, ms;
}ps1, ps2;
int UCLN(int x, int y)
{
    int a=abs(x);
    int b=abs(y);
    if(a>b) return UCLN(a-b,b);
    else if(a<b) return UCLN(a,b-a);
    else if(a==b) return a;
}
void Nhap(PHANSO& ps1, PHANSO& ps2)
{
    cout<<"Nhap tu so va phan so thu 1: ";
    cin>>ps1.ts>>ps1.ms;
    cout<<"Nhap tu so va phan so thu 2: ";
    cin>>ps2.ts>>ps2.ms;
    cout<<endl;
}
void Dangdung(PHANSO& ps1)
{
    if(ps1.ts*ps1.ms<0){
        ps1.ts=-abs(ps1.ts);
        ps1.ms=abs(ps1.ms);
    }
    else{
        ps1.ts= abs(ps1.ts);
        ps1.ms= abs(ps1.ms);
    }
}
void RutGon1phanso(PHANSO ps1)
{
    int c=UCLN(ps1.ts, ps1.ms);
    int d=UCLN(ps2.ts, ps2.ms);
    Dangdung(ps1);
    Dangdung(ps2);
    cout<<"\nPhan so 1 sau khi rut gon: "<< ps1.ts/c <<"/"<< ps1.ms/c;
    cout<<"\nPhan so 2 sau khi rut gon: "<<ps2.ts/d <<"/"<< ps2.ms/d;
    cout<<endl;
}
void Sosanh2phanso(PHANSO ps1, PHANSO ps2)
{
    float c=float(ps1.ts)/ps1.ms;
    float d=float(ps2.ts)/ps2.ms;
    Dangdung(ps1);
    Dangdung(ps2);
    if(c>d) cout<<"\nPhan so lon nhat: "<<ps1.ts<<"/"<<ps1.ms;
    else if(c<d) cout<<"\nPhan so lon nhat: "<<ps2.ts<<"/"<<ps2.ms;
    else if(c==d) cout<<"\nHai phan so bang nhau";
    cout<<endl;
}
void TinhToan(PHANSO ps1, PHANSO ps2)
{
    Dangdung(ps1);
    Dangdung(ps2);
    int a=ps1.ts*ps2.ms+ps1.ms*ps2.ts;
    int b=ps1.ms*ps2.ms;
    int c=UCLN(a,b);
    cout<<"\nCong hai phan so: "<<a/c<<"/"<<b/c;
    int a1=ps1.ts*ps2.ms-ps1.ms*ps2.ts;
    int c1=UCLN(a1,b);
    cout<<"\nTru hai phan so: "<<a1/c1<<"/"<<b/c1;
    int d=UCLN(ps1.ts*ps2.ts, ps1.ms*ps2.ms);
    cout<<"\nNhan hai phan so: "<< (ps1.ts*ps2.ts)/d <<"/"<< (ps2.ms*ps1.ms)/d;
    int e=UCLN(ps1.ts*ps2.ms, ps1.ms*ps2.ts);
    cout<<"\nChia hai phan so: "<< (ps1.ts*ps2.ms)/e <<"/"<< (ps1.ms*ps2.ts)/e;
    cout<<endl;
}
int main()
{
    Nhap(ps1,ps2);
    cout<<"Cau 1: ";
    RutGon1phanso(ps1);
    cout<<"\nCau 2: ";
    Sosanh2phanso(ps1,ps2);
    cout<<"\nCau 3: ";
    TinhToan(ps1, ps2);

}
