// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATISpaEnvironment.h
//   This interface allows the query of SpaEnvironment
//
//===================================================================
#ifndef CATISpaEnvironment_H
#define CATISpaEnvironment_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SpaceAnalysisItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySpaceAnalysisItf IID IID_CATISpaEnvironment ;
#else
extern "C" const IID IID_CATISpaEnvironment ;
#endif





class ExportedBySpaceAnalysisItf CATISpaEnvironment: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Info
     * @param 
     *    Info
     * @return
     *    HRESULT
     */
    virtual HRESULT Init  () const=0;

    /**
     * Info
     * @param 
     *    Info
     * @return
     *    HRESULT
     */
    virtual HRESULT Clean  () const=0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATISpaEnvironment, CATBaseUnknown );

#endif
