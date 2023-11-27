#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"

#pragma package(smart_init)

#include<vector>
#include<string>
#include<cmath>
#include<queue>
#include<iostream>

int status=0;
int R=25;
int M_Y,M_X;

std::vector<edge>edges;
std::vector<vertex>vertices;
std::vector<std::vector<std::pair<int,int>>>graph;

void draw_ver(int X, int Y, int index, TColor Color)
{
	Form1->PaintBox1->Canvas->Pen->Color = clBlack;
	Form1->PaintBox1->Canvas->Font->Color = clBlack;
	Form1->PaintBox1->Canvas->Brush->Color = Color;
	Form1->PaintBox1->Canvas->MoveTo(X,Y);
	Form1->PaintBox1->Canvas->Ellipse(X-R,Y-R,X+R,Y+R);
	Form1->PaintBox1->Canvas->TextOut(X-R*0.1,Y-R*0.2,index);
}

void draw_edge(int X1, int Y1, int X2, int Y2, int weight, TColor Color)
{
	Form1->PaintBox1->Canvas->Pen->Color = Color;
	Form1->PaintBox1->Canvas->Brush->Color = clBtnFace;
	Form1->PaintBox1->Canvas->MoveTo(X1,Y1);
	Form1->PaintBox1->Canvas->LineTo(X2,Y2);
	Form1->PaintBox1->Canvas->TextOut((X1+X2)/2,(Y1+Y2)/2,weight);
}

void bfs(int x, std::vector<bool>&visited) {
   std::queue<int>q;
   q.push(x);
   while(!q.empty()) {
	  int buff = q.front();
	  q.pop();
	  for(auto &x : graph[buff]) {
		 if(visited[x.second]) {
			continue;
		 }
		 visited[x.second] = true;
		 q.push(x.second);
	  }
   }
}

int comp()
{
   std::vector<bool>visited(graph.size(),false);
   int comp = 0;
   for(int i = 0; i < graph.size(); i++) {
	  if(!visited[i]) {
		 comp++;
		 bfs(i,visited);
	  }
   }
   return comp;
}

int dejkstra(int x, int y)
{
   int n = graph.size();
   std::vector<bool>vis(n,false);
   std::vector<int>dist(n,10e5);
   std::priority_queue<std::pair<int,int>>q;
   dist[x]=0;
   q.push({0,x});
   while(!q.empty())
   {
	  int buff;
	  buff=q.top().second;
	  q.pop();
	  if(vis[buff])
		 continue;
	  vis[buff]=true;
	  for(auto &e : graph[buff])
	  {
		 int versh2=e.second, w=e.first;
		 if (dist[buff]+w < dist[versh2])
		 {
			dist[versh2] = dist[buff]+w;
			q.push({-dist[versh2],versh2});
		 }
	  }
   }
   return dist[y];
}


