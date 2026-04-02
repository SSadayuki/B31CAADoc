// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================

#ifndef __CATMfgResourceConstant_h__
#define __CATMfgResourceConstant_h__

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

//
// Only Manufacturing can use these strings
//
#include "MfgItfEnv.h"

class CATUnicodeString;

// Liste resources disponibles 
// --------------------------------------------------------------- 
ExportedByMfgItfEnv extern const CATUnicodeString MfgResource;

ExportedByMfgItfEnv extern const CATUnicodeString MfgResourceNLSFile;
ExportedByMfgItfEnv extern const CATUnicodeString MfgResourceDictionary;
ExportedByMfgItfEnv extern const CATUnicodeString MfgResourceRequirement;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolRequirement;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertRequirement;

// Liste des attributs disponibles sur les resources 
// --------------------------------------------------------------- 
ExportedByMfgItfEnv extern const CATUnicodeString MfgName;
ExportedByMfgItfEnv extern const CATUnicodeString MfgComment;
ExportedByMfgItfEnv extern const CATUnicodeString MfgUserIdent;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRepositorySource;
ExportedByMfgItfEnv extern const CATUnicodeString MfgOriginalId;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRepresentation;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLinkToResource;

// Liste des attributs disponibles sur les ResourceRequirement
//------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgRepository;
ExportedByMfgItfEnv extern const CATUnicodeString MfgResourceType;
ExportedByMfgItfEnv extern const CATUnicodeString MfgResourceQuery;


//=================================================================================
//=================================================================================
// Le Nouveau Modèle de Resources
//=================================================================================
//=================================================================================
// Liste des fichiers resources
//------------------------------------------------------ 
ExportedByMfgItfEnv extern const CATUnicodeString CATMfgResourceNLSFile;
ExportedByMfgItfEnv extern const CATUnicodeString CATMfgResourceDictionary;

ExportedByMfgItfEnv extern const CATUnicodeString CATMfgResource;
ExportedByMfgItfEnv extern const CATUnicodeString CATMfgResourceRequirement;


#endif
