
/* public: void __thiscall CColorTimeEdit::GetTime(int &,int &,int &) */

void __thiscall CColorTimeEdit::GetTime(CColorTimeEdit *this,int *param_1,int *param_2,int *param_3)

{
                    /* 0x15090  347  ?GetTime@CColorTimeEdit@@QAEXAAH00@Z
                       0x15090  349  ?GetTime@CTimeEdit@@QAEXAAH00@Z */
  *param_1 = *(int *)(this + 0x74);
  *param_2 = *(int *)(this + 0x78);
  *param_3 = *(int *)(this + 0x7c);
  return;
}

