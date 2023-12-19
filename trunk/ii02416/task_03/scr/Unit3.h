#ifndef Unit3H
#define Unit3H
#include <vector>
#include <vcl.h>
struct vertex
{
	int X,Y;
	std::string NAME;
	TColor Color;
};
struct edge
{
	int X1,Y1,X2,Y2,weight;
	TColor Color;
};
extern std::vector<vertex> vertices;
extern std::vector<edge> edges;
extern std::vector<std::vector<std::pair<int,int>>> graph;
extern int status;
extern int R;
extern int M_X;
extern int M_Y;
int comp();
int dejkstra(int x, int y);
void draw_ver(int X, int Y, int index, TColor Color);
void draw_edge(int X1, int Y1, int X2, int Y2, int weight, TColor Color);
#endif
