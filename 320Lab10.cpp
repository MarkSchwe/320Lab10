#include <iostream>
#include <istream>
#include "d_util.h"
#include "d_graph.h"
using namespace std;

int main(){
filebuf file;
string buffer = " ";
set<char> l;
list<char> e;
graph<char> B;
file.open("graphB.dat",ios::in);
istream file2(&file);
file2 >> B;
file.close();
char inp;
cout << "Input a character for a vertex: ";
cin >> inp;
l = bfs(B,inp);
writeContainer(l.begin(),l.end());
cout << endl;
dfs(B,e);
writeContainer(e.begin(),e.end());
cout << endl;
    return 0;
}
