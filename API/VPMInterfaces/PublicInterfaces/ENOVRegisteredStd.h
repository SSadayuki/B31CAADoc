// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// ENOVRegisteredStd:
//   ENOVIA v5  generic Methods Registration header
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Sep 99   Creation                                   J.Poitreau
//=============================================================================
#ifndef _ENOVRegisteredStd_H_
#define _ENOVRegisteredStd_H_

#include "ENOVRegister.h"

ENOVRegisterPackage(Standard);

// ---------------------------------------------------------------------
// EVENT DATA DEFINITION SECTION
// ---------------------------------------------------------------------
// Usage:
//   use ONLY there macros:
//   - ENOVRegisterEventData(data_def)
//   - ENOVRegisterEventArg(data_def, arg_name, arg_type)
//   DO NOT use " (double quotes) in macros' parameters
//
// Sample1: an EventData definition with no argument (does it exist!?)
//   ENOVRegisterEventData(nice_data_def);
//    ENOVRegisterEventArg(nice_data_def,no_arg_name,ENOVEvtArgNil);
// Sample2: an EventData definition with 2 arguments
//   ENOVRegisterEventData(very_nice_data_def);
//    ENOVRegisterEventArg(very_nice_data_def,name,ENOVEvtArgString);
//    ENOVRegisterEventArg(very_nice_data_def,type,ENOVEvtArgInt);
// Please, give NICE/APPROPRIATE names to EventData definitions
// ---------------------------------------------------------------------

ENOVRegisterEventData(Null);
ENOVRegisterEventData(Default);


// ---------------------------------------------------------------------
// GENERIC METHODS SECTION
// ---------------------------------------------------------------------
// Usage:
//   use ONLY there macro:
//   - ENOVRegisterMethod(method_name, data_def)
//   DO NOT use " (double quotes) in macro's parameters
// ---------------------------------------------------------------------
// ... NO EventData is specified yet (=Null) ...
// But, ALL METHODS declared here MUST have a NON-Null EventData definition
// ---------------------------------------------------------------------

ENOVRegisterMethod(AllPrivileges,            Null);
ENOVRegisterMethod(AddAffectedObject,        Null);
ENOVRegisterMethod(AddChild,                 Null);
ENOVRegisterMethod(AddChildDoc,              Null);
ENOVRegisterMethod(AddChildPartInstance,     Null);
ENOVRegisterMethod(AddChildProductClass,     Null);
ENOVRegisterMethod(AddChildProductComponent, Null);
ENOVRegisterMethod(AddChildProductInstance,  Null);
ENOVRegisterMethod(AddChildProductRootClass, Null);
ENOVRegisterMethod(AddModificationHistory,   Null);
ENOVRegisterMethod(AttachDocument,           Null);
ENOVRegisterMethod(ChangeDates,              Null);
ENOVRegisterMethod(ChangeLevel,              Null);
ENOVRegisterMethod(ChangeOwner,              Null);
ENOVRegisterMethod(ChangePriority,           Null);
ENOVRegisterMethod(ChangeStatus,             Null);
ENOVRegisterMethod(Create,                   Null);
ENOVRegisterMethod(Cut,                      Null);
ENOVRegisterMethod(CutChild,                 Null);
ENOVRegisterMethod(Delete,                   Null);
ENOVRegisterMethod(Modify,                   Null);
ENOVRegisterMethod(ModifyEffectivity,        Null);
ENOVRegisterMethod(Move,                     Null);
ENOVRegisterMethod(NewVersion,               Null);
ENOVRegisterMethod(NewVersionDiffFFF,        Null);
ENOVRegisterMethod(NewVersionSameFFF,        Null);
ENOVRegisterMethod(Paste,                    Null);
ENOVRegisterMethod(PasteOn,                  Null);
ENOVRegisterMethod(ProductManagement,        Null);
ENOVRegisterMethod(Replace,                  Null);
ENOVRegisterMethod(ReplaceReference,         Null);
ENOVRegisterMethod(Save,                     Null);

#endif

