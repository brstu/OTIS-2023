#ifndef Unit12H
#define Unit12H
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <vector>

int findSmalest(std::vector <int> dist, std::vector <bool> isVisited);
class TForm12 : public TForm
{
__published:
	TMemo *DeikstraColumn;
	TButton *Button1;
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Edit2Exit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:
public:
	__fastcall TForm12(TComponent* Owner);
};
extern PACKAGE TForm12 *Form12;
#endif
