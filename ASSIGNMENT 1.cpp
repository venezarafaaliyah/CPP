#include <iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter your score between 0 & 100 : ";
   cin>>num;
   if(num >= 0) {
      cout<<"E";
   }
   else if(num>=41) {
      cout<<"D";
   }
   else if(num>=56) {
      cout<<"C";
   }
   else if(num>=61) {
      cout<<"BC";
   }
   else if( num>=66) {
      cout<<"B";
   }
   else if(num>=76) {
      cout<<"AB";
   }
   else if(num>=86) {
      cout<<"A";
   }
   else {
      cout<<"number is not between 1 & 100";
   }

   //cout << "\n\n Press ANY CHARACTER to Exit...";
   //char quit='q';
   //cin >> quit;
   return 0;
}*/

#include <iostream>
using namespace std;
int main(float){
   float num;
   cout <<"Enter your score between 0 & 100 : ";
   cin>>num;
   if (num<=100 && num>=86) {
         cout<<"A";
}
   else if(num<=85 && num>=76) {
      cout<<"AB";
   }
   else if(num<=75 && num>=66) {
      cout<<"B";
   }
   else if(num<=65 && num>=61) {
      cout<<"BC";
   }
   else if(num<=60 && num>=56) {
      cout<<"C";
   }
   else if(num <=55 && num>=41) {
      cout<<"D";
   }
   else if(num <=10 && num>=0) {
      cout<<"E";
   }
   else {
      cout<<"number is not between 1 & 100";
   }

   //cout << "\n\n Press ANY CHARACTER to Exit...";
   //char quit='q';
   //cin >> quit;
   return 0;
}
