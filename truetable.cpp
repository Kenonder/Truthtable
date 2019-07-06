#include<iostream>
#include<string>

using namespace std;

int index(string a,int len){
	int index=0;
	for(int i=0;i<len;i++){
	if(a[i]=='+'||a[i]=='.')
	index++;
	} 
	return index;
}  

int main(int argc,char* argv[]){
	string input;
	input = argv[1];
	int length= input.length();
	int oprater=index(input,length);
	int size = oprater+1;
	int binarySize = 1<<size;
	
		for (int i=0;i<length;i+=2){
			cout << input[i]<<"\t";
		}
		cout << input << endl;

	if(input[1]='+'){
	for(int i=0;i<binarySize;i++){
	int binary=i;
	int output=1;
	string outputString="";
	
	for(int j=0;j<size;j++){
		if(binary%2==0){
			outputString="F\t"+outputString;
			output *=0;			
		}else{
			outputString = "T\t"+outputString;
			output *=1;
			}
		binary = binary>>1;
		}
	if(output ==0){
		cout<<outputString<<"F"<<endl;
	}else{
		cout<<outputString<<"T"<<endl;
	}
	}

	}else{
		for(int i=0;i<binarySize;i++){
	int binary=i;
	int output=0;
	string outputString="";
	
	for(int j=0;j<size;j++){
		if(binary%2==0){
			outputString="F\t"+outputString;
			output +=0;			
		}else{
			outputString = "T\t"+outputString;
			output +=1;
			}
		binary = binary>>1;
		}
	if(output ==0){
		cout<<outputString<<"F"<<endl;
	}else{
		cout<<outputString<<"T"<<endl;
	}
	}

	} 
                   

}

