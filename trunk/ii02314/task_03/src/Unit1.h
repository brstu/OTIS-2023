//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <vector>
#include <string>

#include <utility>


struct vertex
{
	int id;
	int x,y;
	std::string name;
	int r,g,b;
};
struct edge
{
	int id;
	//int from, to;
	int x1,y1,x2,y2,weight;
	int r,g,b;
	bool isOriented;
};



extern int idVertex;
extern int idEdge;
extern int XX;
extern int YY;
extern std::vector<edge> edges;
extern std::vector<vertex> vertexes;
extern std::vector<std::vector<int>> adjMatrix;
extern std::vector<std::vector<std::pair<int,int>>> graph;
void drawVertex(vertex temp);
void drawEdge(edge ed);
void refreshGraph();
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *File1;
	TMenuItem *File2;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *Graph1;
	TMenuItem *Graph2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *DeleteVertex1;
	TMenuItem *DeleteVertex2;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *DeleteEdge1;
	TMenuItem *DeleteEdge2;
	TMenuItem *Algorithm1;
	TMenuItem *Algorithm2;
	TMenuItem *Info1;
	TMenuItem *IncMatrix1;
	TMenuItem *IncMatrix2;
	TMenuItem *FindPath1;
	TMenuItem *ShowInfo1;
	void __fastcall N4Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall DeleteVertex1Click(TObject *Sender);
	void __fastcall DeleteEdge1Click(TObject *Sender);
	void __fastcall DeleteEdge2Click(TObject *Sender);
	void __fastcall DeleteVertex2Click(TObject *Sender);
	void __fastcall Algorithm2Click(TObject *Sender);
	void __fastcall IncMatrix1Click(TObject *Sender);
	void __fastcall IncMatrix2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
