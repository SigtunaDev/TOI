#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

int main(){
	
	string str = " ";
	string wor = " ";
	
	getline(cin,str);
	getline(cin,wor);
	
	char c[2048];
	char w[2048];
	
	strcpy(c,str.c_str());
	strcpy(w,wor.c_str());
	
	int n = str.length();
	
	int* visited = new int[wor.length()];
	
	for(int i = 0; i < wor.length(); i++){
		
		visited[i] = 0;
		
	}
	
	for(int i = 0; i < str.length(); i++){
		
		char ch = c[i];
		
		bool find = false;
		
		if(ch == ' '){
			
			cout << " ";
			continue;
			
		}
		
		for(int j = 0; j < wor.length(); j++){
			
			if(w[j] == 1) continue; 
			
			if(w[j] == ch){
				
				visited[j] == 1;
				
				cout << ch;
				
				find = true;
				
				break;
				
			}
			
		}
				
		if(find == false) break;
		
	} 
	
}
