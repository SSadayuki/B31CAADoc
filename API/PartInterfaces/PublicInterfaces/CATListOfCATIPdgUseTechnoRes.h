 #ifndef CATListOfCATIPdgUseTechnoRes_H
 #define CATListOfCATIPdgUseTechnoRes_H
 
// COPYRIGHT DASSAULT SYSTEMES 2013
/* 
* @CAA2Level L1
* @CAA2Usage U1
*/
/**
* @collection CATLISTP(CATIPdgUseTechnoRes)
* Collection class for pointers to CATIPdgUseTechnoRes
* All the methods of pointer collection classes are available.
* Refer to the articles dealing with collections in the encyclopedia.
*/
 
 #include  "CATIPdgUseTechnoRes.h"
 
 #include "CATLISTP_Clean.h"
 
 #define CATLISTP_Append
 #define	CATLISTP_InsertAt
 #define	CATLISTP_RemoveNulls
 #define	CATLISTP_RemoveAll
 #define CATLISTP_Replace
 
 #include "CATLISTP_Declare.h"
 
 #undef CATCOLLEC_ExportedBy
 #define CATCOLLEC_ExportedBy ExportedByPartItf
 
 CATLISTP_DECLARE( CATIPdgUseTechnoRes )
 
 #define CATListOfCATIPdgUseTechnoRes CATLISTP(CATIPdgUseTechnoRes)
 
 #endif


