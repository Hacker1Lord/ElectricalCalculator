#include <iostream>
#include <string>
#include <iomanip>
#define CLR "\033[2j"
#define TOP cout<<"*********************************************"<<endl;
#define HEADER ( cout<<"MATERIAL"<<setw(15)<<"| UNIT P(#)" <<setw(20)<<"|  QNTY P.(#)")
#define RESET "\033[0m"
//#define BLACK "\033[31m"
#define RED "\033[32m"
#define GREEN "\033[33m"
//#define DIM "\033[34m"
#define GREE "\033[35m"
#define YELLOW "\033[31m"
/*

#define h "\033[36m"
#define j "\033[37m"
    #define k "\033[38m"
*/

using namespace std;

class Password
{
    private: string code; bool log=true;
    public:int maxcnt=3,cod, attempt;string line;
    bool pas()
    {
   do
          
             {
         
        cout<<RED<<"WELCOME TO KRIS_JNR C++ ELECTRICAL ENGINEERING PROGRAM.\nTHIS IS WHERE ALL MY APPS ARE STORED. PLEASE ENTER PASSWORD TO LOGIN"<<RESET<<endl;
        cin>>code;
        if(code == "SAMMY"|| code=="sammy")
            {cout<<GREEN<<"LOGIN SUCCESSFUL"<<RESET<<endl;
               CLR;
                 cout<<"\n\t\a\a\aPLEASE WHAT WOULD YOU HAVE ME DO FOR YOU?\a"<<endl;
                cout<<"1.INDUSTRIAL WIRING EATIMATE\n2. DOMESTIC Wiring Estimate"<<endl;
               
               
                cin>>cod;
                if(cod==1)
                {
                cout<<"ALRIGHT YOU WANT THE ADDITION FUNCTION"<<endl;}
                else if(cod==2)
               
                {cout<<YELLOW<<"OK YOU WANT THE ESTIMATE FUNCTION"<<RESET<<endl;
                     int a,b,c,d,e,g,h,i,j,k,l,m,n,o,p,q,r,tape,s,t,u,v,w,x,y,z,A,B,C;
                    int D;
                static int E,F,
                    H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn,oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,aaa,zz;
                    
                        HEADER;
                    TOP;
                  int G;
                        cout<<GREE<<"\n\n**COIL OF 1.5MM COMETSTAR----------";
                        cin>>a>>b;
                        cout<<"="<<b*a<<endl;
              cout<<"\n\n**COIL OF 2.5MM COMETSTAR-----------";
                        cin>>c>>d;
                        cout<<"="<<c*d<<endl;
             cout<<"\n6MM OR 10MM COPPER COMESTAR CABLE-----";cin>>m>>n;
cout<<" = "<<m*n<<endl;
cout<<" \nCOIL OF ANTENNA CABLE-------------";
cin>>o>>p;
cout<<" = "<< o*p <<endl;

cout<<"\n 6 / 16mm ALUMINIUM------------";
cin>>q>>r;
cout<<" = "<< q*r <<endl;

cout<<"\n3029 (1mm) CABLE --------------";
cin>>s>>t;
cout<<" = "<<s*t<<endl;

cout<<"\n ANY 2.5MM BY 3-------------";
cin>>u>>v;
cout<<" = "<< u*v <<endl;

cout<<"\nANY FLEXIBLE WIRE?------------";
cin>>w>>x;
cout<<" = "<<w*x<<endl;

cout<<"\n4mm COPPER COMETSTAR?-------------";
cin>>y>>z;
cout<<" = "<<y*z<<endl;

cout<<"\n 6W POP LIGHT (1 COLOR)-------------";
cin>>A>>B;
cout<<" = "<<A*B<<endl;

cout<<"\n6W  POP LIGHT (2 COLOR)------------";
cin>>C>>D;
cout<<" = "<<C*D<<endl;

cout<<" 9/12W POP LIGHT (2 COLOR)-------------";
cin>>E>>F;
cout<<" = "<<E*F<<endl;

cout<<" \nFANCY LAMPHOLDERS-------------";
cin>>G>>H;
cout<<" = "<<G*H<<endl;

cout<<" --------------";
cin>>I>>J;
cout<<" = "<< I*J<<endl;

cout<<"\n LAMPHOLDERS-------------";
cin>>K>>L;
cout<<" = "<< K*L <<endl;

cout<<"\n 13A SOCKETS------------";
cin>>M>>N;
cout<<" = "<< M*N <<endl;

cout<<"\n 15AMPS SOCKETS-------------";
cin>>O>>P;
cout<<" = "<<O*P<<endl;

cout<<"\n AC SWITCHES--------------";
cin>>Q>>R;
cout<<" = "<< Q*R <<endl;

cout<<"\n 3 GANG SWITCHES------------";
cin>>S>>T;
cout<<" = "<< S*T<<endl;

cout<<"\n 2 GANG SWITCHES--------------";
cin>>U>>V;
cout<<" = "<< U*V <<endl;

cout<<"\n 1 GANG SWITCHES--------------";
cin>>W>>X;
cout<<" = "<< W*X <<endl;

cout<<"\n BEDSWITCH --------------";
cin>>Y>>Z;
cout<<" = "<< Y*Z <<endl;
cout<<"\n ANTENNA SOCKETS------------";
cin>>aa>>bb;
cout<<" = "<< aa*bb <<endl;

cout<<"\n 100/200A CHANGE-OVER SWITCH-------------";
cin>>cc>>dd;
cout<<" = "<< cc*dd<<endl;

cout<<"\n 3by6 COOKER SOCKET-------------";
cin>>ee>>ff;
cout<<" = "<< ee*ff <<endl;

cout<<"\n 6by6 COOKER SOCKET-------------";
cin>>gg>>hh;
cout<<" = "<< gg*hh <<endl;

cout<<"\n ORIGINAL HALFMOON WALLBRKT------------";
cin>>ii>>jj;
cout<<" = "<< ii*jj<<endl;
                    
                   
cout<<"\nORDINARY HALFMOON WALLBRACKET--------------";
cin>>kk>>ll;
cout<<" = "<<kk*ll<<endl;

cout<<"\n SORROUNDING FITTINGS--------------";
cin>>mm>>nn;
cout<<" = "<< mm*nn <<endl;

cout<<"\n TAPE LIGHT FOR POP & CHOKE--------------";
cin>>oo>>pp;
cout<<" = "<< (oo*pp) + 1000 <<endl;

cout<<"\n EARTH ROD--------------";
cin>>qq>>rr;
cout<<" = "<< qq*rr<<endl;

cout<<"\n SALT/ LIME AND CHARCOAL--------------";
cin>>ss>>tt;
cout<<" = "<< ss*tt  <<endl;

cout<<"\n SHORT/LONG BH SCREW ------------";
cin>>uu>>vv;
cout<<" = "<< uu*vv <<endl;

cout<<"\n SHORT/LONG BH SCREW SILVER-------------";
cin>>ww>>xx;
cout<<" = "<< ww*xx<<endl;

cout<<"\n PVC COVER SQUARE--------------";
cin>>yy;
cout<<" = "<<yy*50<<endl;

cout<<"\n PVC COVER ROUND --------------";
cin>>zz;
cout<<" = "<< zz*50 <<endl;

cout<<"\nBLACK SCREWNAIL-------------";
cin>>aaa;
cout<<" = "<< aaa*10<<endl;  /*cout<<"\n6MM OR 10MM COPPER COMESTAR CABLE-----";cin>>m*/
               cout<<"\n100/200A CERAMIC FUSE----------  ";cin>>g>>h;
                    cout<<(g*h);
                   cout<<"\nMETER BOARD--------------";cin>>i>>j;
                    cout<<" = "<<i*j<<endl;
                                       cout<<"\nCONCRETE NAILS--------------";cin>>k>>l;
                    cout<<" = "<<k*l<<endl;
                    cout<<"\nCELOTAPE";cin>>tape;cout<<" = "<<tape*100<<endl;
                    
                  cout<<RED<<"\nWORKMANSHIP>>>>>>>>>>>>>>>>>>>"<<endl;
                cin>>e;cout<<" = "<<endl;
                 
                cout<<"TOTAL="<<(a*b)+(c*d)+e+(g*h)+(i*j)+(k*l)+(m*n)+(o*p)+(q*r)+(s*t)+(u*v)+(w*x)+(y*z)+(A*B)+(C*D)+(E*F)+(G*H)+(I*J)+(K*L)+(M*N)+(O*P)+(Q*R)+(S*T)+(U*V)+(W*X)+(Y*Z)+(aa*bb)+(cc*dd)+(ee*ff)+(gg*hh)+(ii*jj)+(kk*ll)+(mm*nn)+((oo*pp)+1000)+(qq*rr)+(ss*tt)+(uu*vv)+(ww*xx)+(yy*50)+(zz*50)+(aaa*10)+(tape*100)<<RESET<<endl;
                    
              
  
                 
                       }
                else if(cod==3)
                {cout<<"YOU WANT MORE OPTIONS"<<endl;
                    break;
                    }
       else
                cout<<"INVALID INPUT"<<endl;
            break;
           }
else
        log=false;
cout<<attempt++<<"\nWRONG PASSWORD. YOU ARE A THIEF TRYING TO BREAK IN. NO WAY FOR YOU"<<endl;
}
       while(++attempt<=maxcnt); 
       }
};
class All
{public:
  void alfunc()
    {
    cout<<"\nMORE OPTIONS"<<endl;
        cin.sync();
        cin.clear();
        
}
    };

int main()
{
    Password pasobjt;
    pasobjt.pas();
    All obj;
    obj.alfunc();
return 0;
}
