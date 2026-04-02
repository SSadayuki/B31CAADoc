// COPYRIGHT Dassault Systemes 2006
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */
//===================================================================
//
// CATEAPspDesignValidation.h
// Adapter for CATIPspDesignValidation implementations
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATEAPspDesignValidation_H
#define CATEAPspDesignValidation_H

#include "CATEAPspValidation.h"

//------------------------------------------------------------------

class ExportedByCATPspItfCPP CATEAPspDesignValidation: public CATEAPspValidation
{
  public:

    CATDeclareClass;

    CATEAPspDesignValidation();
    virtual ~CATEAPspDesignValidation();  

  private:

    // do not implement
    CATEAPspDesignValidation (CATEAPspDesignValidation &);
    CATEAPspDesignValidation& operator=(CATEAPspDesignValidation&);

};

//------------------------------------------------------------------

#endif
