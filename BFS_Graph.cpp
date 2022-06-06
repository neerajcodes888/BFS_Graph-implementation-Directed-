#include<iostream>
using namespace std;
int graph[10][10],visited[10],n;
void BFS(int vertex);
int main()
{
	int ver;
	cout<<"Enter no. of vertices:";
	cin>>n;
	cout<<"Please enter elements for "<<n<<" * "<<n<<" Adjacency Matrix:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>graph[i][j];
		}
	}
	for(int i=0;i<n;i++)
{
	visited[i]=0;
}
cout<<"From Which vertex would you want to Traverse:";
cin>>ver;
cout<<"BFS Traversal :";
BFS(ver);
}
void BFS(int vertex)
{
	cout<<vertex<<" ";
	visited[vertex]=1;
	for(int i=0;i<n;i++)
	{
		if(!visited[i]&&graph[vertex][i]==1)
		{
		//	cout<<i<<" ";
			
			BFS(i);
		}
	}
}