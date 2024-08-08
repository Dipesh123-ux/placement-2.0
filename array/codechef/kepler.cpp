#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float t1 , t2, r1, r2;
	    cin>>t1>>t2>>r1>>r2;
	    
	     float T1 = t1*t1;
         float R1 = r1*r1*r1;

         float k1 = T1/R1;

	     float T2 = t2*t2;
         float R2 = r2*r2*r2;
	     
         float k2 = T2/R2;
	   

         cout<<k1<<" "<<k2<<endl;
	     
	     if(k1 == k2){
	         cout<<"Yes"<<endl;
	     }
	     else if(k1 != k2){
	         cout<<"No"<<endl;
	     }
	    
	}
	
}
