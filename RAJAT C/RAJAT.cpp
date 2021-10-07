#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<windows.h>
using namespace std;

class smart
{
public:
	int wish;
	int jj;
	public:
	void welcomescreen();
	void login_screen();
	void hotel();
	void mall();
	void swimming_pools();
	void swim_a();
	void mall_a();
	int get_value();
	void hotel_a();
};
   void smart::welcomescreen()
{
    system("color 70");
    cout<<"\n\n\t\t    ^^^^^||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";                                                                                               ;
	cout<<"                                                    WELCOME  TO   JAIPUR                                 "<<endl;       
	cout<<"                                              ' THE PINK CITY '                                         "<<endl;
	cout<<"	                          JAIPUR ENGINEERING COLLEGE AND RESEARCH CENTRE, FOUNDATION                         "<<endl;
	cout<<"                 **************-----------------------------------------------------------------********"<<endl;
//	cout<<  endl << endl << endl<< endl;
//	cout<<  endl << endl;
	cout<<"                               ......    NAME   --  RAJAT MUNDRA       ...           "<<endl;
	cout<<" Press Enter to continue...." << endl << endl << endl << endl;
    getch();
}
void smart::login_screen(){
	system("color 40");
	
	char input[100];
      ifstream inFile;
      inFile.open("input.text");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout << input << endl;}
      inFile.close();}
int smart::get_value(){
	cout<<"enter your wish"<<endl;
      cin>>wish;
      return wish;
}
void smart::swimming_pools(){
system("color 60");
smart s;
	char input[100];
      ifstream inFile;
      inFile.open("swim.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout << input << endl;}
      inFile.close();
      cout<<"For All SWIMMING POOLS Information Press 1"<<endl;
      cin>>jj;
      if(jj==1)
	   s.swim_a();
}
void smart::hotel_a(){
	system("color 50");
		char input[100];
      ifstream inFile;
      inFile.open("hotel123.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(150)<< input << endl;}
      inFile.close();
	
}
void smart::mall_a(){
	system("color 10");
		char input[100];
      ifstream inFile;
      inFile.open("mall123.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(20)<< input << endl;}
      inFile.close();

}
void smart::swim_a(){  
system("color 70");
smart s;
		char input[100];
      ifstream inFile;
      inFile.open("swimming.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout <<setw(100)<< input << endl;}
      inFile.close();
      inFile.close();


}
void smart::mall(){ 
system("color 20");
smart m;
	char input[100];
      ifstream inFile;
      inFile.open("mall.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout<<setw(40) << input << endl;}
      inFile.close();
      inFile.close();
      cout<<"For All MALL Information Press 1"<<endl;
      cin>>jj;
      if(jj==1)
	   m.mall_a();
	
}
void smart::hotel(){ 
system("color 10");
 smart h;
	char input[100];
      ifstream inFile;
      inFile.open("hotel.txt");
      while(inFile) {
      inFile.getline(input, 255);
      if(inFile) cout<<setw(70) << input << endl;}
      inFile.close();
      cout<<"For All Hotel Information Press 1"<<endl;
      cin>>jj;
      if(jj==1)
	   h.hotel_a();

		 }

int main()
{   int p=0;
	smart view;
		view.welcomescreen();
		while(1){
		view.login_screen();
		int x=view.get_value();
		switch(x){
		case 1:
	    view.swimming_pools();
	    break;
	    case 2:
		view.hotel();
		break;
		case 3:
		view.mall();
		break;
		default:
			cout<<"WRONG CHOICE FILL"<<endl;
			break;
		}
		cout<<"if you want end this program press 0"<<endl;
		cout<<" to continoue press 1"<<endl;
		cin>>p;
		if(p==0)break;
		else
		cout<<" Again continue"<<endl;
		}
		return 0;

}

