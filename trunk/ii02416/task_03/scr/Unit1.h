#ifndef Unit1H
#define Unit1H

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>

class TForm1 : public TForm
{
public:
__fastcall TForm1(TComponent* Owner);__published:
	TPaintBox *PaintBox1;
	TPanel *Panel1;
	TButton *AddEdge;
	TButton *DeleteEdge;
	TButton *EditVertex;
	TButton *EditEdge;
	TButton *Import;
	TButton *InfoGraph;
	TButton *Export;
	TButton *Distance;
	TSaveTextFileDialog *SaveTextFileDialog1;
	TOpenTextFileDialog *OpenTextFileDialog1;

	void __fastcall PaintBox1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall AddEdgeClick(TObject *Sender);
	void __fastcall DeleteEdgeClick(TObject *Sender);
	void __fastcall EditVertexClick(TObject *Sender);
	void __fastcall EditEdgeClick(TObject *Sender);
	void __fastcall InfoGraphClick(TObject *Sender);
	void __fastcall DistanceClick(TObject *Sender);
	void __fastcall ImportClick(TObject *Sender);
	void __fastcall ExportClick(TObject *Sender);
private:
};

extern PACKAGE TForm1 *Form1;

#endif
