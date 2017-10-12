//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
extern int rekrut,rekrut2;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::batonClick(TObject *Sender)
{
 Form5->Visible=false;
 Form2->Visible=true;
 Form2->Top = Form5->Top;
 Form2->Left = Form5->Left;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormActivate(TObject *Sender)
{
if (rekrut >= 1)
 {
 Rekrut->Visible=true;
 Nap1->Visible=true;
 Nap1->Caption=rekrut;
 }
 else
 {
   {
 Rekrut->Visible=false;
 Nap1->Visible=false;
 }
 if (rekrut2 >= 1)
 {
 Rekrut2->Visible=true;
 Nap2->Visible=true;
 Nap2->Caption=rekrut2;
 }
 else
 {
   {
 Rekrut2->Visible=false;
 Nap2->Visible=false;
 }
 }
 }
 }

//---------------------------------------------------------------------------

