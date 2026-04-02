// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenAxisLineWithProvSR_H
#define CATIDftGenAxisLineWithProvSR_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATListOfDouble.h"

class CATMathLine;
class CATIDftGenRequest;
class CATCell;
class CATBody;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenAxisLineWithProvSR ;
#else
extern "C" const IID IID_CATIDftGenAxisLineWithProvSR;
#endif

/**
 * Definition of interface which describes specific behaviors of axis line 
 * symbolic representations (SR).
 * Axis line symbolic representation is returned by feature (e.g. Hole) when 
 * called on CATIDftGenRequest::GetSymbolicRep. Symbolic rep must be created by 
 * feature using CATIDftGenSRFactory provided by the caller.
 * SR is used as a receptacle to transport informations computed by feature to
 * generative drafting process.
 * @see CATIDftGenRequest
 * @see CATIDftGenSRFactory
 */
class ExportedByDraftingItfCPP CATIDftGenAxisLineWithProvSR: public IUnknown
{
  public:

    /**
     * Sets the object to point
     *   @param iObjRef
     *     Object to be pointed.
     */
    
    virtual HRESULT SetObject(CATIDftGenRequest *iObjRef)=0;
    
    /**
     * Gets the pointed object
     *   @param oObjRef
     *     Pointed object.
     */
    virtual HRESULT GetObject(CATIDftGenRequest **oObjRef)=0;

    /**
     * Sets the axis of pointed object.
     *   @param iLine
     *      Axis in 3D model.
     *   @param iBody
     *      Body in 3D model. 
     *   @param iCell
     *      Cell in 3D model.
     *      if not null, will be used to differenciate several axisline pointing the same object
     */
    virtual HRESULT SetLineAndProv(CATMathLine *iLine, CATBody *iBody=NULL, CATCell *iCell=NULL)=0;

    /**
     * Gets the axis.
     *   @param oLine
     *     Axis to project in view.
     *   @param oBody
     *     Body.
     *   @param oCell
     *     Cell to use to differenciate several axisline pointing the same object.
     */
    virtual HRESULT GetLineAndProv(CATMathLine **oLine, CATBody **oBody, CATCell **oCell)=0;

    /**
     * Sets the 2D axis color.
     */
    virtual void SetColor(int iRed,int iGreen,int iBlue)=0;
    
    /**
    * Sets the 2D axis line type.
    */
    virtual void SetLineType(int iLineType)=0;
    
    /**
    * Sets the 2D axis thickness.
    */
    virtual void SetThickness(int iThick)=0;
	/**
	* Sets over run values.
	* @param <tt>CATListOfDouble& iOverruns</tt>
	* [in] Over run values.
	* @return
	* A <tt>HRESULT</tt>
	* <dl>
	* <dt> <tt>S_OK</tt>           <dd> Everything OK
	* <dt> <tt>E_FAIL</tt>			<dd> Otherwise
	* <dt> <tt>E_INVALIDARG</tt>	<dd> if input is not a four element list
	* </dl>
	* <br>Remark : It must be a 2 element list.
	*/
	virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns)=0;
};
#endif
