#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int N,Q=1;
	int a,b=1;
	bool x=0;
	vector<int> respuesta;
	
	cin>>N>>Q;

	while(N!=0 && Q!=0){
		for(int i=0;i<N;i++){
			cin>>a;
			respuesta.push_back(a);
		};
		sort(respuesta.begin(),respuesta.end());

		cout<<"CASE# "<<b<<":"<<endl;
		b++;
		for(int i=0;i<Q;i++){
			cin>>a;
			auto it=find(respuesta.begin(),respuesta.end(),a);
			if(it != respuesta.end()){
				cout<<a<<" found at "<<distance(respuesta.begin(),it)+1<<endl;;
			}
			else{
				cout<<a<<" not found"<<endl;
			}
			/*for(int j=0;j<respuesta.size();j++){
				if(respuesta[j]==a){
					cout<<a<<" found at "<<j+1<<endl;
					x=1;
					break;
				}
			}*/
		}
		respuesta.clear();
		cin>>N>>Q;
	}
	return 0;
}
