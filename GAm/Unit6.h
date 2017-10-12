//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
        TImage *tlo;
        TImage *rek;
        TImage *baton;
        TTimer *zeg;
        TLabel *Haj;
        TShape *NN;
        TLabel *LL;
        void __fastcall batonClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall RekzClick(TObject *Sender);
        void __fastcall rekClick(TObject *Sender);
        void __fastcall zegTimer(TObject *Sender);
        void __fastcall rekMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall tloMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
