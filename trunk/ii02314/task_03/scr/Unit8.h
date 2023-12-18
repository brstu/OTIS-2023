#ifndef Unit8H
#define Unit8H
#include <Vcl.StdCtrls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
class TForm8 : public TForm
{
__published:
	TLabel *LABEL;
	TLabel *LABELLABEL;
	TEdit *NewVertexName;
	TEdit *RRR;
	TEdit *GGG;
	TEdit *BBB;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:
public:
	__fastcall TForm8(TComponent* Owner);
	void __fastcall passID(int x1);
};
extern PACKAGE TForm8 *Form8;
#endif
