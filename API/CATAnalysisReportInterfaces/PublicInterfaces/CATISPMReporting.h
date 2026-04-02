#ifndef CATISPMReporting_H_
#define CATISPMReporting_H_

//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//=================================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATAnalysisReportInterfaces.h"
#include "CATBaseUnknown.h"
class CATUnicodeString;
class CATSPMReportingBag;

// ==================================================================
//
//	Interface CATISPMReporting :
//
//		Interface to subscribe for HTML Reporting
//
// ==================================================================
//

extern ExportedByCATAnalysisReportInterfaces IID IID_CATISPMReporting;

class ExportedByCATAnalysisReportInterfaces CATISPMReporting : public CATBaseUnknown 
{
    CATDeclareInterface;

   public:
    virtual HRESULT GetAllAvailableReportingMethods (CATUnicodeString*& oNameReport, int& oNbMethods) = 0;

    // Reporting output is in "neutral format"
    virtual HRESULT GetReport (const CATUnicodeString& iReportName, CATSPMReportingBag& oBag) = 0;
};
 
// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------
CATDeclareHandler(CATISPMReporting, CATBaseUnknown);
#endif
