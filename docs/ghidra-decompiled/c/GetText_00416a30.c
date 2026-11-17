
/* public: virtual wchar_t const * __thiscall CGridCell::GetText(void)const  */

wchar_t * __thiscall CGridCell::GetText(CGridCell *this)

{
  wchar_t *pwVar1;
  
                    /* 0x16a30  337  ?GetText@CGridCell@@UBEPB_WXZ */
  pwVar1 = L"";
  if (*(int *)(*(wchar_t **)(this + 0x2c) + -6) != 0) {
    pwVar1 = *(wchar_t **)(this + 0x2c);
  }
  return pwVar1;
}

