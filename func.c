#include "a4gl_incl_4glhdr.h"
extern int a4gl_lib_status;
static char *_module_name="func.4gl";


A4GL_MAIN int main(int argc,char *argv[]);
A4GL_FUNCTION int aclfgl_sumar (int n);
#define fgldate long
static char const _rcsid[]="$FGLIdent: func.4gl Compiler-1.61  Log:Not Set $";
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
long suma ;

static int _done_init_global_variables=1;
A4GL_INTERNAL_FUNCTION void init_global_variables_func_429(void) {
 static void *_objData[]={
NULL};
   if (_done_init_global_variables==0) return;
   _done_init_global_variables=0;
   A4GL_register_global_objects(_module_name, _objData);
   A4GL_check_version(_module_name,"1.6",1);
   A4GL_check_dependant_tables(_module_name, _CompileTimeSQLType, _dependantTables);
   /* Print nullify */
   suma=0;
}


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
   init_global_variables_func_429();
   // Initialise any other global variables
}




A4GL_MAIN int main(int argc,char *argv[]) {
char *_paramnames[1]={""};
void *_blobdata=0;
int _nargs=0;
static char *_functionName = "MAIN";
    void *_objData[]={
   NULL};
   A4GLSTK_setCurrentLine(0,0);
   if (A4GL_fgl_start(argc,argv)) {a4gl_show_compiled_version();}

   init_module_variables();
   /* Print nullify */
   A4GLSTK_initFunctionCallStack();
   A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,5,_objData);

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_CALL_CMD Line 6 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,6);
   aclfgli_clr_err_flg();
   A4GL_push_long(1);
   A4GL_push_long(2);
   /* done print expr */
   {int _retvars;A4GL_set_status(0,0);
   A4GLSTK_setCurrentLine(_module_name,6);
   _retvars=aclfgl_sumar(2);
   /* pr 1 */
   { /* print_returning */
   static struct BINDING ibind[1]={

   {NULL,2,0,0,0,0,NULL}
   };

   ibind[0].ptr=&suma;
   CHECK_RETURN_AND_POP(1);
   }
   }
      ERR_CHK_ERROR  { A4GL_chk_err(6,_module_name); }
   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_DISPLAY_CMD Line 7 E_MET_MAIN_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,7);
   aclfgli_clr_err_flg();
   A4GL_push_char("suma: ");

   A4GL_push_long(suma);
   A4GL_push_int(-1);
   A4GL_push_int(-1);
   A4GL_display_at(2,0xffffffff);
      ERR_CHK_ERROR  { A4GL_chk_err(7,_module_name); }
   A4GLSTK_popFunction_nl(0, 9);
   A4GL_fgl_end_4gl_0();
   return 0;
}



A4GL_FUNCTION int aclfgl_sumar (int _nargs){
void *_blobdata=0;
static char *_functionName = "sumar";
long a ;
long b ;

struct BINDING _fbind[2]={ /* 2 print_param_g */
{NULL,2,0,0,0,0,NULL}
,
{NULL,2,0,0,0,0,NULL}
};
char *_paramnames[3]={ /* 2 */ /*print_param_g */
  "a",
  "b",
0
};

_fbind[0].ptr= &a;

_fbind[1].ptr= &b;
 void *_objData[]={
NULL};
A4GLSTK_pushFunction_v2(_functionName,_paramnames,_nargs,_module_name,11,_objData);
if (_nargs!=2) {A4GL_set_status(-3002,0);A4GL_pop_args(_nargs);A4GLSTK_popFunction_nl(0,11);return -1;}

   init_module_variables();
   /* Print nullify */
   a=0;
   b=0;
   {int _lstatus=a4gl_status;
   A4GL_pop_params_and_save_blobs(_fbind,2,&_blobdata);
   if (_lstatus!=a4gl_status) { A4GL_chk_err(11,_module_name);  }
   }

   A4GL_clr_ignore_error_list();
   /* CMD : E_CMD_RETURN_CMD Line 13 E_MET_FUNCTION_DEFINITION */
   A4GLSTK_setCurrentLine(_module_name,13);
   aclfgli_clr_err_flg();

   A4GL_push_long(a);

   A4GL_push_long(b);
   A4GL_pushop(OP_ADD);
   A4GLSTK_popFunction_nl(1,13);
   A4GL_copy_back_blobs(_blobdata,1);
   return 1;
   A4GLSTK_popFunction_nl(0,14);
   A4GL_copy_back_blobs(_blobdata,0);
   return 0;
}

/* END OF MODULE */
