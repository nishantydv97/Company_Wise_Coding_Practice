/*
Traveling in maze

You are give a n*m filed where each cell is a plot and hase somme grass growing in it. but grass grows at different rates in a
different plots. You have to  start from (1,1)and reach to (n,m), by moving down or right only. also is the thickness of the grass
is greater then T in a plot, then it is impossible to inter it, Hence, you have to find it you can reach (n,m) without getting stuck
in any grass fiels.
initially  the thikness of the grass in a pplot is a[i][j], and it  increase by d[i][j] every dey.

for example for a plot (i,j), if a[i][j]=2 and d[i][j]=3, then the thickness are 2,5,8 onn day 1,2,3  respectively.

Determine if it is possible to reach the end of the maze.

input formate

 1st line contain the no. of test case denoted by T.

each test case contains the following line
  1. first line of the each test contain three integer N,M,T denoting the length ogf the field, the width  of the field, and  the
  thickness thresold respactively.
  2. the next N line contain integer where each of these  line denotes the initial thickness of the grass.
  3. The next N line contain M integer where each of these line denote thee rate at which grass grow.

Output formate:

Print "YES" or "NO"

*/

#include<iostream>
using namespace std;


string maze_traveller (int threshold, vector<vector<int>> inti_thickness, vector<vector<long, long>> rate, int rows, innt cols){
  vector<vector<bool>>  vis;
  for(int i=0;i<rows;i++){
    vector<int> vi;
    for(int j=0;j<cols;j++){
      vi.push_back(0);
    }
    vis.push_back(vi);
  }

  stack<pair<int,int>> stk;
  int i=0,j=0;
  int day=1;
  stk.push(make_pair(i,j));
  day++;
  while(!stk.empty()){
    if(i==rows  && j==clos){
      return "YES";
    }
    pair<int, int> topi=stk.top();
    i=topi.first;
    j=topi.second;
    stk.pop();
    day--;
    if(i<rows-1 && inti_thickness[i][j]+(day*rate[i][j])< threshold && vis[i][j]==0){
      day++;
      vis[i][j]=1;
      i++;
      stk.push(make_pair(i,j));
      if(i==rows-1 && j==cols-1){
        return "YES";
      }
    }
    if(i<cols-1 && inti_thickness[i][j]+(day*rate[i][j])< threshold && vis[i][j]==0){
      day++;
      vis[i][j]=1;
      j++;
      stk.push(make_pair(i,j));
      if(i==rows-1 && j==cols-1){
        return "YES";
      }
    }
  }
  return "NO";
}




int main(){
  iso::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin__t;
  for(int i=0;i<t;i++){
    int rows;
    cin>>rows;
    int cols;
    cin>>cols;
    int threshold;
    cin>>threshold;

    vector<vector<int>>  inti_thickness(rows, vector<int>(clos));
    for(int i_init_thickness=0; i_init_thickness<rows; i_init_thickness++){
      for(int j_init_thickness=0; j_init_thickness<clos; j_init_thickness++){
        cin>>inti_thickness[i_init_thickness][j_init_thickness];
      }
    }
    vector<vector<long long>> rate(rows, vector<long long>);
    for(int j=0;j<rows;j++){
      for(int k=0;k<clos;k++){
        cin>>rate[j][j];
      }
    }
    string  out_;
    out_=maze_traveller(threshold, inti_thickness, rate, rows, cols);
    cout<<out_<<endl;
  }
  return 0;
}
