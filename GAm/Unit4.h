//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TImage *tlo;
        TImage *baton;
        TImage *reku;
        TImage *ulepsz;
        TLabel *Haj;
        TTimer *Timer1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall batonClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall ulepszClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
