#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char cipher[100];
	int num,mod,i;
	bool loop=true;
	cout<<"���{�������ıK�X�[�ѱK\n";
	while(loop){
		cout<<"�[�K�п�J1"<<endl;
		cout<<"�ѱK�п�J2"<<endl;
		cout<<"�ɤO�}�ѿ�J3"<<endl;
		cout<<"�h�X�п�J4"<<endl;

		cin>>num;
		switch(num){
			case 1:
				cout<<"��J��r=>";
				cin>>cipher;
				cout<<"��J�����q=>";
				cin>>mod;
				for(int i=0;i<strlen(cipher);i++){
					if(cipher[i]>='A'and cipher[i]<='Z')
					{
						cipher[i]=((cipher[i]-'A')+mod)%26+'A';
					}
					else if(cipher[i]>='a'and cipher[i]<='z')
					{
						cipher[i]=((cipher[i]-'a')+mod)%26+'a';
					}

			}
				cout<<cipher;
				cout<<endl;
				break;
				
			case 2:
				cout<<"��J�K��=>";
				cin>>cipher;
				cout<<"��J�����q=>";
				cin>>mod;
				for(int i=0;i<strlen(cipher);i++){
					if(cipher[i]>='A'and cipher[i]<='Z')
					{
						cipher[i]=((cipher[i]-'A')+(26-mod))%26+'A';
					}
					else if(cipher[i]>='a'and cipher[i]<='z')
					{
						cipher[i]=((cipher[i]-'a')+(26-mod))%26+'a';
					}
			}
				cout<<cipher;
				cout<<endl;
				break;

			case 3:
				cout<<"��J�K��=>";
				cin>>cipher;
				for (mod = 0; mod < 26; ++mod) 
				{  
       				string decrypted = cipher;  
        			for (int i = 0; i < decrypted.length(); ++i) {
	        			if (decrypted[i]>='A' and decrypted[i] <= 'Z')
						{
	                		decrypted[i]=((decrypted[i]-'A')+(26-mod))%26+'A';
	            		} 
						else if (decrypted[i]>='a'and decrypted[i]<='z') 
						{
	                		decrypted[i]=((decrypted[i]-'a')+(26 - mod))%26+'a';
	            		}	
        			}
        			cout << "key " << mod << ": " << decrypted << endl;
    			}	
				break;
				
			case 4:
				loop=false;
				break;
				
			default:
				cout<<"��J���~";
				break;
		}
	}
	return 0;
}
