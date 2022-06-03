#include<iostream>
#include<vector>

using namespace std;

// Data structure to store a graph
struct Edge
{
	int src, dest, weight;
};

typedef pair<int, int> Pair;

class Graph
{
	public:
		// a vector of vectors of pairs to represent an adjacency list
		vector<vector<Pair>> adjList;

		Graph(vector<Edge> const &edges, int n)
		{
			// resize the vector to hold n elemnts of type vector<Edge>
			adjList.resize(n);

			// add edges to the directed graph
			for(auto &edge: edges)
			{
				int src = edge.src;
				int dest = edge.dest;
				int weight = edge.weight;

				// insert at end

				adjList[src].push_back(make_pair(dest, weight));

				// uncomment for undirected graph
				// adjList[dest].push_back(make_pair(src, weight));
			} //end for
		} //end graph()
}; // end class

void printGraph(Graph const &graph,int n)
{
	for(int i=0;i<n;i++)
	{
		for(Pair v:graph.adjList[i])
		{
			cout<<"("<<i<<","<<v.first<<","<<v.second<<")";
		}
		cout<<endl;
	}//end for

}//end printGraph

int main()
{
	vector<Edge> edges={
	//(x,y,z)->edge from 'x' to 'y' the weight 'w'
	{0,1,6},{1,2,7},{2,0,5},{2,1,4},{3,2,10},{5,4,1},{4,5,3}};
	
	int n=6;

	// graph object ==>> calling parameterized constructor
	Graph graph(edges,n);
	printGraph(graph,n);

	return 0;
}
