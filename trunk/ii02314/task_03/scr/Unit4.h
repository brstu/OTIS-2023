#ifndef Unit4H
#define Unit4H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

void deleteEdges(int id1, int id2);
class TForm4 : public TForm
{
__published:
	TLabel *Vertex1;
	TLabel *Vertex2;
	TEdit *FName;
	TEdit *SName;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Button2Click(TObject *Sender);
	//void __fastcall Button2Click(TObject *Sender);
	//void __fastcall Button2Click(TObject *Sender);
	void __fastcall FNameExit(TObject *Sender);
	void __fastcall SNameExit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:
public:
	__fastcall TForm4(TComponent* Owner);
};
extern PACKAGE TForm4 *Form4;
#endif
