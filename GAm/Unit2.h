//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TShape *Slonko;
        TImage *ziemia;
        TImage *B1;
        TImage *B2;
        TImage *l1;
        TImage *l2;
        TImage *r2;
        TImage *r1;
        TImage *baton;
        TImage *Baton2;
        TLabel *Haj;
        TImage *PR;
        TImage *PR1;
        TImage *PR2;
        TImage *PR3;
        TImage *PR4;
        TLabel *WPR;
        TLabel *Rep;
        void __fastcall B1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall ziemiaMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall B2Click(TObject *Sender);
        void __fastcall l1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall l2Click(TObject *Sender);
        void __fastcall r2Click(TObject *Sender);
        void __fastcall r1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall batonClick(TObject *Sender);
        void __fastcall Baton2Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
 