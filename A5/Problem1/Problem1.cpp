#include <iostream>

using namespace std;

double f(double);
double Trapm(double, int, double[]);

int main(){
   double a, b, y[20];
   int n;
   cout<<"Enter the value of a: ";
   cin>>a;
   cout<<"Enter the value of b: ";
   cin>>b;
   cout<<"Enter the value of n: ";
   cin>>n;
   double h = (b-a)/n;
   for(int i = 0; i < n; i++){
      y[i] = f(a+i*h);
   }
   double I = Trapm(h, n, y);
   cout<<"a: "<<a<<endl;
   cout<<"b: "<<b<<endl;
   cout<<"n: "<<n<<endl;
   cout<<"h: "<<h<<endl;
   cout<<"I: "<<I<<endl;
   return 0;
}

double Trapm(double h, int n, double f[]){
   double sum = f[0];
   for(int i = 1; i < n-1; i++){
      sum = sum + 2 * f[i];
   }
   sum = sum + f[n];
   return h + sum/2;

}

double f(double x){
   double pi = 3.141592654;
   double sum = 0.0;
   for(int j =0; j <= 5; j++){
      //insert function here
      sum = sum + 2/(j+1);
   }
   return sum;
}
