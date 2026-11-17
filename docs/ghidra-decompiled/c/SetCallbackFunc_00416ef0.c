
/* public: void __thiscall CGridCtrl::SetCallbackFunc(int (__stdcall*)(struct tagGV_DISPINFO
   *,long),long) */

void __thiscall
CGridCtrl::SetCallbackFunc(CGridCtrl *this,_func_int_tagGV_DISPINFO_ptr_long *param_1,long param_2)

{
                    /* 0x16ef0  466  ?SetCallbackFunc@CGridCtrl@@QAEXP6GHPAUtagGV_DISPINFO@@J@ZJ@Z
                        */
  *(_func_int_tagGV_DISPINFO_ptr_long **)(this + 0xf0) = param_1;
  *(long *)(this + 0xec) = param_2;
  return;
}

