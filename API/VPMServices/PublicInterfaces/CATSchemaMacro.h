// --------------------------------------------------------            
// VPM (c) Copyright Dassault Systemes 1996                           
// -------------------------------------------------------------       
// Responsable: AHC                                                     
// --------------------------------------------------------------       
// Macro: CATSchemaMacro.h                                                     
// --------------------------------------------------------------       
// Contenu:  Header pour Load dynamique de schema                    
// --------------------------------------------------------------       
// Historique:                                                          
// Creation : 96/02/15 > AHC                                           
// --------------------------------------------------------------
// Debut de la macro                                                    
// --------------------------------------------------------------       
//
// --> Parametres de WINDOWS_NT
//
#ifdef _WINDOWS_SOURCE
#define ExportedByVX0TOOLS  __declspec(dllexport)  
#else
#define ExportedByVX0TOOLS
#endif
/**
* @CAA2Level L1 
* @CAA2Usage U1
*/ 
// ---------------------------------------------------                 
// --> Includes standards C et C++ 
// ---------------------------------------------------                 
//
#include <stdio.h>
#include <string.h>
//
#if defined(_WINDOWS_SOURCE)
#include <errno.h>
#include <io.h>
#endif
#if defined(_IRIX_SOURCE) || defined(_SUNOS_SOURCE) || defined(_HPUX_SOURCE) || defined(_AIX)
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#endif
//
// -> Definition du point d'entree de la SHARED-LIBRARY necessaire au LOADER, 
//
/**
 * Defines the symbols needed to dynamically load an EXPRESS schema using CATLoadExternalSchema.
 * @param schema
 * name of the express schema to be loaded.
 */
#define LoadSchemaDico(schema)\
        class ExportedByVX0TOOLS schema { public: schema();};\
        extern "C" ExportedByVX0TOOLS int fctCreate##schema();\
        int  fctCreate##schema(){ int ret=1 ; return ret; }\
        schema::schema(){ 

// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
