#include<bits/stdc++.h>
using namespace std;

struct Data {
  int a[4][4];
};

const int N = 70000;
int dd[N];
Data a;
queue<Data> st;

Data read(){
  Data a;
  for(int i=0; i<4; i++){
    string s;
    cin>>s;
    for(int j=0; j<4; j++){
      a.a[i][j] = s[j] - '0';
    }
  }
  return a;
}

int getCode(Data a){
  int ans = 0;
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++)
      ans = ans * 2 + a.a[i][j];
  }
  return ans;
}

void push(Data a, int ord){
  st.push(a);
  dd[getCode(a)] = ord;
}


void up(int i, int j, Data a, int ord){
  if(i==0 || a.a[i-1][j] == 1) return ;
  swap(a.a[i][j], a.a[i-1][j]);
  if(!dd[getCode(a)]){
    push(a, ord);
  }
}


void down(int i, int j, Data a, int ord){
  if(i==3 || a.a[i+1][j] == 1) return ;
  swap(a.a[i][j], a.a[i+1][j]);
  if(!dd[getCode(a)]){
    push(a, ord);
  }
}

void left(int i, int j, Data a, int ord) {
	if (j == 0 || a.a[i][j-1] == 1) return ;
	swap(a.a[i][j], a.a[i][j-1]);
	if (!dd[getCode(a)]) push(a, ord);
}

void right(int i, int j, Data a, int ord) {
	if (j == 3 || a.a[i][j+1] == 1) return ;
	swap(a.a[i][j], a.a[i][j+1]);
	if (!dd[getCode(a)]) push(a, ord);
}


void solve(){
  //loang
  a = read();
  push(a, 1);
  a = read();
  while(!st.empty()){
    Data x = st.front();
    st.pop();
    if(getCode(x) == getCode(a)) break;
    int ord = dd[getCode(x)]+1;
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        if(x.a[i][j] == 1){
          up(i,j,x,ord);
          down(i,j,x,ord);
          left(i,j,x,ord);
          right(i,j,x,ord);
        }
      }
    }
  }
  cout<<dd[getCode(a)]-1<<endl;
}

int main(){
  solve();
  return 0;
}
