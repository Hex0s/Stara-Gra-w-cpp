//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TImage *Im;
        TImage *baton;
        TImage *btu;
        TImage *batonik;
        TShape *Ramka;
        TLabel *Wramce;
        TTimer *T;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall batonClick(TObject *Sender);
        void __fastcall ImenClick(TObject *Sender);
        void __fastcall btuClick(TObject *Sender);
        void __fastcall btuMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall ImMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall batonikMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall TTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
