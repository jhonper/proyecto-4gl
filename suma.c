#include "a4gl_incl_4glhdr.h"
extern int a4gl_lib_status;
static char *_module_name="suma.4gl";


A4GL_MAIN int main(int argc,char *argv[]);
#define fgldate long
static char const _rcsid[]="$FGLIdent: suma.4gl Compiler-1.61  Log:Not Set $";
static void a4gl_show_compiled_version(void) {
printf("Log: Not Set\n");
printf("Aubit4GL Version: 1.6.1\n");
exit(0);
}

static const char *_CompileTimeSQLType="pg8";
static const struct sDependantTable _dependantTables[]= {
  {0,0}
};

extern struct {
   long sqlcode ;
   char sqlerrm [72+1];
   char sqlerrp [8+1];
   long sqlerrd[6] ;
   char sqlawarn [8+1];
   char sqlstate [9+1];
} a4gl_sqlca;
extern long a4gl_status ;
extern long aiplib_status ;
extern long curr_form ;
extern long curr_hwnd ;
extern char err_file_name [32+1];
extern long err_line_no ;
extern long err_status ;
extern long int_flag ;
extern long quit_flag ;

static int _done_init_module_variables=1;
A4GL_INTERNAL_FUNCTION static void init_module_variables(void) {
 static void *_objData[]={
NULL};
   if (_done_init_module_variables==0) return;
   _done_init_module_variables=0;
   A4GL_register_module_objects(_module_name, _objData);
   A4GL_check_version(_module_name,"1.6",1);
   A4GL_check_dependant_tables(_module_name, _CompileTimeSQLType, _dependantTables);
   /* Print nullify */
   // Initialise the current global variables
   // No global variables in use
   // Initialise any other global variables
}




A4GL_MAIN int main(int argc,char *argv[]) {
char *_paramnames[1]={""};
void *_blobdata=0;
int _nargs=0;
static char *_functionName = "MAIN";
   long a ;
   long b ;
   long suma ;
    void *_objData[]={
   NULL};
   A4GLSTK_setCurrentLine(0,0);
   if (A4GL_fgl_start(argc,argv)) {a4gl_show_compiled_version();}

   init_module_variables();
   /* Print nullify */
   a=0;
   b=0;
   suma=0;
   A4GLSTK_initFunctionCallStack();
   A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,1,_objData);

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_OPEN_FORM_CMD Line 4 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,4);
   aclfgli_clr_err_flg();

   A4GL_push_char("suma.per");A4GL_open_form("f_suma");
      ERR_CHK_ERROR  { A4GL_chk_err(4,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_FORM_CMD Line 5 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,5);
   aclfgli_clr_err_flg();

   A4GL_disp_form("f_suma",-1);
      ERR_CHK_ERROR  { A4GL_chk_err(5,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_INPUT_CMD Line 7 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,7);
   aclfgli_clr_err_flg();
   {
   int _fld_dr= -100;
   int _exec_block= 0;
   char *_fldname;char *_curr_win;int _sf;
   int _attr=-1;
   static struct BINDING ibind[2]={

   {NULL,2,0,0,0,0,NULL},
   {NULL,2,0,0,0,0,NULL}
   };
   char _sio_2[610];
   char _inp_io_type='I';
   char *_sio_kw_2="s_screenio";
   struct s_field_name _fldlist[]={
      {"a",1},
      {"b",1},
      {NULL,0}
   };
   int _forminit=1;
   static struct aclfgl_event_list _sio_evt[]={
   {-94,1,0,""},
    {0}};
   memset(_sio_2,0,sizeof(_sio_2));
   while(_fld_dr!=0){
      if (_fld_dr== -100) {
         /* input by name */

         ibind[0].ptr=&a;

         ibind[1].ptr=&b;
         _curr_win=A4GL_get_currwin_name();
         SET("s_screenio",&_sio_2,"currform",A4GL_get_curr_form(1));
         if (GET_AS_INT("s_screenio",&_sio_2,"currform")==0) break;
         SET("s_screenio",&_sio_2,"vars",ibind);
         SET("s_screenio",&_sio_2,"attrib",_attr);
         SET("s_screenio",&_sio_2,"novars",2);
         SET("s_screenio",&_sio_2,"help_no",0);
         SET("s_screenio",&_sio_2,"processed_onkey",0);
         SET("s_screenio",&_sio_2,"field_list",0);
         SET("s_screenio",&_sio_2,"current_field_display",A4GL_get_option_value('c'));
         SET("s_screenio",&_sio_2,"currentfield",0);
         SET("s_screenio",&_sio_2,"currentmetrics",0);
         SET("s_screenio",&_sio_2,"mode",1);
         SET("s_screenio",&_sio_2,"nfields",A4GL_gen_field_chars((void ***)GETPTR("s_screenio",&_sio_2,"field_list"),(void *)GET("s_screenio",&_sio_2,"currform"),"a",0,"b",0,NULL));
         if (GET_AS_INT("s_screenio",&_sio_2,"nfields")==-1) break;
         _sf=A4GL_set_fields(&_sio_2); A4GL_debug("_sf=%d",_sf);if(_sf==0) {_fld_dr=0;break;}
         _fld_dr= -1;_exec_block=0;
      } /* end of initialization */
      if (_exec_block==1) { break; }
      A4GL_ensure_current_window_is(_curr_win);
      _exec_block=A4GL_form_loop_v2(&_sio_2,_forminit,_sio_evt);_forminit=0;
      if (_exec_block>0) _fld_dr=A4GL_get_event_type(_sio_evt,_exec_block); else _fld_dr= -1;
      CONTINUE_BLOCK_1:    ;   /* add_continue */
   }
   END_BLOCK_1:    ;   /* add_continue */
   A4GL_finish_screenio(&_sio_2,_sio_kw_2);
   }
      ERR_CHK_ERROR  { A4GL_chk_err(7,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_LET_CMD Line 9 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,9);
   aclfgli_clr_err_flg();

   A4GL_push_long(a);

   A4GL_push_long(b);
   A4GL_pushop(OP_ADD);

   A4GL_pop_var2(&suma,2,0);
      ERR_CHK_ERROR  { A4GL_chk_err(9,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 11 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,11);
   aclfgli_clr_err_flg();
   A4GL_push_char("la suma es: ");

   A4GL_push_long(suma);
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(11,_module_name); }
   A4GLSTK_popFunction_nl(0, 14);
   A4GL_fgl_end_4gl_0();
   return 0;
}
/* END OF MODULE */
