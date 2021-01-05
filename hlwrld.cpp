#include<iostream>
using namespace std;
/*
	Tell what I am doing if you can you Sam Son Of A Bitch
	Told you to provide english subtitles in your spanish videos a thousand times
	Why dont you reply?
*/
char getat(int pos){
	int arr[11]={72,101,108,108,111,32,87,111,114,108,100},val=0;
	double fac;
	for(int i=0;i<11;i++){//If you understand, you won't remain a virgin anymore in 2021
		fac=*(arr+i);
		for(int j=0;j<11;j++){
			if(!(i-j))continue;
			fac*=(pos-j)/(i-j);
		}
		val+=(int)fac;
	}
	return (char)val;
}
int main(){
	for(double i=0;i<11;i+=0.5)
	if(!((int)i-i))
	cout<<getat((int)i);
	return 0;
}
