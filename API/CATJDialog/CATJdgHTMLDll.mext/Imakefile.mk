#===========================================================================================================================================================
# Imakefile for module CATJdgHTMLDll.mext
#===========================================================================================================================================================
#  Jun 2016  Creation: AGD5 :  From .NET 4.4 CXR27, with CLR=YES, .dll will not be generated in code\clr directory. from 
# Hence, created .mext with the dll copied from CXR26 run time view.
#===========================================================================================================================================================

BUILT_OBJECT_TYPE = CSHARP
BUILD=NO  

#if os win_b64
   #ifdef CATIAV5R27
      BUILD=YES
      TYPE = CLIENT
      PROGRAM_NAME=CATJdgHTML
   #endif
#endif

