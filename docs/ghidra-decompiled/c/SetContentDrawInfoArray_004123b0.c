
/* public: void __thiscall CScheduleData::SetContentDrawInfoArray(class CArray<struct
   sContentDrawInfo,struct sContentDrawInfo &> &) */

void __thiscall
CScheduleData::SetContentDrawInfoArray
          (CScheduleData *this,CArray<sContentDrawInfo,sContentDrawInfo&> *param_1)

{
                    /* 0x123b0  474
                       ?SetContentDrawInfoArray@CScheduleData@@QAEXAAV?$CArray@UsContentDrawInfo@@AAU1@@@@Z
                        */
  if (this + 0x2c != (CScheduleData *)param_1) {
    FUN_0041a320(this + 0x2c,*(int *)(param_1 + 8));
    FUN_0041a5d0(*(int *)(this + 0x30),*(int *)(param_1 + 4),*(int *)(param_1 + 8));
  }
  return;
}

