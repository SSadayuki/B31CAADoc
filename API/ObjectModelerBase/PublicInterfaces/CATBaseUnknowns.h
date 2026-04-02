// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef _CATBaseUnknowns_H
#define _CATBaseUnknowns_H
//
//
//drl: Les VarBaseUnknown sont des defines permettant de migrer
//     les interfaces CCP de CATBaseUnknown_ptr a CATBaseUnknown_var
//     Idem pour les ListOfVarBaseUnknown
//     Idem pour les valeurs NULL_varBaseUnknowm
//
//La seule variable a definir pour tester cette migration
#define MIGR_CCP_TO_VAR
//

#include<CATBaseUnknown.h>

#ifndef MIGR_CCP_TO_VAR
//            -------------------------------------------------
//            Version CCP AVEC VarBaseUnkown=CATBaseUnknown*
//            -------------------------------------------------
#ifndef VarBaseUnknown
#define VarBaseUnknown CATBaseUnknown_ptr
#endif
#ifndef NULL_varBaseUnknown
#define NULL_varBaseUnknown  NULL
#endif
#ifndef ListOfVarBaseUnknown
#define ListOfVarBaseUnknown CATLISTP(CATBaseUnknown)
#endif

//this includes should provide defintion for ListOfVarBaseUnknown
#include<sequence_CATBaseUnknown_ptr.h>

//            -------------------------------------------------
#else
//            -------------------------------------------------
//            Version CCP AVEC VarBaseUnkown=CATBaseUnknown_var
//            -------------------------------------------------
#ifndef VarBaseUnknown
#define VarBaseUnknown CATBaseUnknown_var
#endif
#ifndef NULL_varBaseUnknown
#define NULL_varBaseUnknown  NULL_var
#endif
#ifndef ListOfVarBaseUnknown
#define ListOfVarBaseUnknown CATLISTV(CATBaseUnknown_var)
#endif

//this includes should provide defintion for ListOfVarBaseUnknown
#include<CATLISTV_CATBaseUnknown.h>
//            -------------------------------------------------
#endif

#include <CP0CLIP.h>

//Localize with IsEqual 
ExportedByCP0CLIP
int CATBaseUnknown_Locate(const ListOfVarBaseUnknown& l, VarBaseUnknown i_obj);

#endif

