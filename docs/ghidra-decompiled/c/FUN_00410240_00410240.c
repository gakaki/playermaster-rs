
basic_ostream<char,std::char_traits<char>_> * __cdecl
FUN_00410240(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(int *)param_1 + 4)),'\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,std::char_traits<char>_>::flush(param_1);
  return param_1;
}

