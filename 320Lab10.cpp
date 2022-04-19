#include <iostream>
#include <istream>
#include "d_util.h"
#include "d_graph.h"
using namespace std;

int main(){
ifstream file;
set<char> l;
list<char> e;
graph<char> B;
file.open("graphB.dat");
file >> B;
file.close();
char inp;
cout << "Input a character for a vertex: ";
cin >> inp;
l = bfs(B,inp);
writeContainer(l.begin(),l.end());
cout << endl;
dfs(B,e);
writeContainer(e.rbegin(),e.rend());
cout << endl;
    return 0;
}
