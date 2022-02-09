#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("E_input.txt", "r", stdin);
	freopen("E_output.txt", "w", stdout);

	int c;
	cin>>c;
	set <string> ans;
	while(c--){
		int l;
		cin>>l;
		string a1[l];
		for(int i=0; i<l; i++){
			cin>>a1[i];
		}
		for(int i=0; i<l; i++){
			ans.insert(a1[i]);
		}
		int d;
		cin>>d;
		string a2[d];
		for(int i=0; i<d; i++){
			cin>>a2[i];
		}
		for(int i=0; i<d; i++){
			ans.erase(a2[i]);
		}
	    
	}
	cout<<ans.size()<<" ";
	for(auto it = ans.begin(); it!=ans.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	return 0;
}
