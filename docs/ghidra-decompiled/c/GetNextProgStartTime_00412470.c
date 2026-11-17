
/* public: class ATL::CTime __thiscall CScheduleData::GetNextProgStartTime(void) */

void __thiscall CScheduleData::GetNextProgStartTime(CScheduleData *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x12470  264  ?GetNextProgStartTime@CScheduleData@@QAE?AVCTime@ATL@@XZ */
  uVar1 = *(undefined4 *)(this + 0x80);
  *in_stack_00000004 = *(undefined4 *)(this + 0x7c);
  in_stack_00000004[1] = uVar1;
  return;
}

