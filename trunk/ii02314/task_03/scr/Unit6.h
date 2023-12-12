#ifndef Unit6H
#define Unit6H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
int Form5idEdges1;
int Form5idEdges2;
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TLabel *WeightLabel;
	TLabel *LevelRGB;
	TEdit *NewWeight;
	TEdit *NewR;
	TEdit *NewG;
	TEdit *NewB;
	TButton *EditExitBut;
	void __fastcall EditExitButClick(TObject *Sender);
private:
public:
	__fastcall TForm6(TComponent* Owner);
	//__fastcall TForm6(TComponent* Owner);
    //__fastcall TForm6(TComponent* Owner);
	void __fastcall passIDS(int x1, int x2);
};
extern PACKAGE TForm6 *Form6;
#endif
