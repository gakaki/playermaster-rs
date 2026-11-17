
/* public: void __thiscall CColorTimeEdit::GetTime(int &,int &,int &,int &) */

void __thiscall
CColorTimeEdit::GetTime(CColorTimeEdit *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
                    /* 0x15060  346  ?GetTime@CColorTimeEdit@@QAEXAAH000@Z
                       0x15060  348  ?GetTime@CTimeEdit@@QAEXAAH000@Z */
  *param_1 = *(int *)(this + 0x74);
  *param_2 = *(int *)(this + 0x78);
  *param_3 = *(int *)(this + 0x7c);
  *param_4 = *(int *)(this + 0x80);
  return;
}

