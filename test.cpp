// Permutations
#include <iostream>
using namespace std;

void Permutation(char *a,int i,int &count){
	if(a[i]=='\0'){
		count++;
		return ;
	}

	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutation(a,i+1,count);
		swap(a[i],a[j]);
	}

}
void Permutations(char *a,int i){
	if(a[i]=='\0'){
		cout<<a<<" ";
		return;
	}

	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutations(a,i+1);
		swap(a[i],a[j]);
	}

}

int main(){
    int count=0;
	char a[100];
	cin>>a;	
    Permutation(a,0,count);
    cout<<count<<endl;
	Permutations(a,0);

	cout<<endl;
	return 0;
} 