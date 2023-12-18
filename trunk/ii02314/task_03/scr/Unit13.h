#ifndef Unit13H
#define Unit13H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
bool checkForOdd();

struct junk{
int a1;
int a2;
int a3;
int a4;
int a5;
}                 ;
class TForm13 : public TForm
{
__published:
	TMemo *informationMemo;
	TButton *showButton;
	void __fastcall showButtonClick(TObject *Sender);
private:
public:
	__fastcall TForm13(TComponent* Owner);
};
extern PACKAGE TForm13 *Form13;
#endif
