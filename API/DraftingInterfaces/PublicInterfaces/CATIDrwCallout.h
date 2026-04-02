// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifndef CATIDRWCALLOUT_H
#define CATIDRWCALLOUT_H

#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
//#include "CATIDrwSimpleText.h"
#include "DraftingItfCPP.h"
class CATICkeParm_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwCallout ;
#else
extern "C" const IID IID_CATIDrwCallout ;
#endif
class ExportedByDraftingItfCPP CATIDrwCallout : public CATBaseUnknown
{
   
   CATDeclareInterface;
  
 public:
   enum Attachment {Starting, Ending};

   virtual void SetVisibilityMode(const int i) = 0;
   virtual int  GetVisibilityMode() = 0;
   virtual CATISpecObject_var GetFeatureDef() = 0;
   virtual void SetFeatureDef(CATISpecObject_var so) = 0;
   virtual CATISpecObject_var GetViewNameDef() = 0;
   virtual void SetViewNameDef(CATISpecObject_var so) = 0;
   virtual CATISpecObject_var GetText1() = 0;
   virtual void SetText1(CATISpecObject_var txtSO) = 0;
   virtual CATISpecObject_var GetText2() = 0;
   virtual void SetText2(CATISpecObject_var txtSO) = 0;
};

CATDeclareHandler(CATIDrwCallout, CATBaseUnknown);
#endif
