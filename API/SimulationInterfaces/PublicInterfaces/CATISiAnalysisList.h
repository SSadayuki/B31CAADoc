/**
* @CAA2Level L0
* @CAA2Usage U0
*/
//======================================================================
//  definition of CATISiAnalysisList
//======================================================================
#ifndef CATISiAnalysisList_h
#define CATISiAnalysisList_h
// COPYRIGHT DASSAULT SYSTEMES 2000

#include  "SimulationItfCPP.h"
class CATISiAnalysis_var ; 

// clean previous functions requests
#include  <CATLISTV_Clean.h>

/** 
 * @collection CATISiAnalysisList 
 * Collection class for CATISiAnalysis objects (CATISiAnalysis_var). 
 * Only the following methods of value collection classes are available: 
 * <ul> 
 * <li><tt>Append</tt></li> 
 * <li><tt>RemoveValue</tt></li> 
 * </ul> 
 * Refer to the articles dealing with collections in the encyclopedia. 
 */ 
#define CATLISTV_Append 
#define CATLISTV_RemoveValue

// get macros
#include  <CATLISTV_Declare.h>

//
// generate interface of collection-class
// (functions declarations)
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedBySimulationItfCPP
CATLISTV_DECLARE(CATISiAnalysis_var)
//
typedef CATLISTV(CATISiAnalysis_var) CATISiAnalysisList ;

#endif



