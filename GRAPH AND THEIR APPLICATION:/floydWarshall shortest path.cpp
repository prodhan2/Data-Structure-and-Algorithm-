#include <bits/stdc++.h>
using namespace std;
#define INF  999
void warshallShortest(int dist[4][4],int v)
{
  for (int k =0;k<v;k++)
  {
      for (int i =0;i<v;i++)
    {
        for  (int j =0;j<v;j++)
        {
          if(dist[i][k] + dist[k][j] < dist[i][j])
          {
              dist[i][j] = dist[i][k] + dist[k][j] ;
          }
        }
    }
  }

for(int i =0;i<v;i++)
{
    for(int j =0;j<v;j++)
    {
      if (dist[i][j] == INF)
      {
          cout<<"INF"<<" ";
      }
      else
        {
            cout<<dist[i][j]<<" ";
        }


    }
    cout<<endl;
 }
  }



int main()
{
    int v,a[4][4];
    cout<<" ENTE A Vertex ="<<endl;
    cin>>v;
    cout<<" Input matrix elements = "<<endl;
    for  (int i =0;i<v;i++)
    {
        for  (int j =0;j<v;j++)
        {
            cin>>a[i][j];
        }
    }


    warshallShortest(a,v);
}

/*v = 4

0 5 999 10
999 0 3 999
999 999 0 1
999 999 999 0
*/
