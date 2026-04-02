// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenSRCenterLine_H
#define CATIDftGenSRCenterLine_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "CATBooleanDef.h"
#include "IUnknown.h"
#include "CATListOfDouble.h"

class CATMathCircle;
class CATIDftGenRequest;
class CATMathDirection2D;
class CATMathPoint2D;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSRCenterLine ;
#else
extern "C" const IID IID_CATIDftGenSRCenterLine;
#endif

/**
 * Definition of interface which describes specific behaviors of center line 
 * symbolic representations (SR).
 * Center line symbolic representation is returned by feature (e.g. Hole) when 
 * called on CATIDftGenRequest::GetSymbolicRep. Symbolic rep must be created by 
 * feature using CATIDftGenSRFactory provided by the caller.
 * SR is used as a receptacle to transport informations computed by feature to
 * generative drafting process.
 * @see CATIDftGenRequest
 * @see CATIDftGenSRFactory
 */
class ExportedByDraftingItfCPP CATIDftGenSRCenterLine: public IUnknown
{
  public:

/**
 * Sets the 3D circle of pointed object.
 * @param <tt>CATMathCircle *iCircle</tt>
 * [in] The circle for which you want to create a centerline
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Everything OK
 * <dt> <tt>E_INVALIDARG</tt>   <dd> iCircle NULL
 * </dl>
 */
    virtual HRESULT SetCircle(CATMathCircle *iCircle)=0;
    
/**
 * Gets the 3D circle.
 * @param <tt>CATMathCircle **oCircle</tt>
 * [out] The circle for which you want to create a centerline
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Everything OK
 * <dt> <tt>E_FAIL</tt>         <dd> No circle was set
 * <dt> <tt>E_INVALIDARG</tt>   <dd> NULL pointer
 * </dl>
 */
    virtual HRESULT GetCircle(CATMathCircle **oCircle)=0;
    
/**
 * Sets the over run mode.
 * @param <tt>boolean iMode</tt>
 * [in] if TRUE : The defaut over run will be applied to the center line
 * if FALSE : no over run will be applied.
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Everything OK
 * </dl>
 */
    virtual HRESULT SetOverRunsMode(boolean iMode)=0;
    
/**
 * Gets the over run mode.
 * The default value is TRUE.
 * @param <tt>boolean *oMode</tt>
 * [out] over run mode
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Everything OK
 * </dl>
 */
    virtual HRESULT GetOverRunsMode(boolean *oMode)=0;
    
/**
 * Sets the object to point
 * @param <tt>CATIDftGenRequest *iObjRef</tt>
 * [in] Object to be pointed.
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Everything OK
 * <dt> <tt>E_INVALIDARG</tt>   <dd> iObjRef NULL
 * </dl>
 */
    virtual HRESULT SetObject(CATIDftGenRequest *iObjRef)=0;
    
/**
 * Gets the pointed object
 * @param <tt>CATIDftGenRequest **oObjRef</tt>
 * [out] Pointed object.
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Everything OK
 * <dt> <tt>E_FAIL</tt>         <dd> No object was set
 * <dt> <tt>E_INVALIDARG</tt>   <dd> NULL pointer
 * </dl>
 */
    virtual HRESULT GetObject(CATIDftGenRequest **oObjRef)=0;
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
 * <br>Remark : It must be a four element list.
 */
	virtual HRESULT SetOverRuns(CATListOfDouble& iOverruns)=0;
/**
 * Sets the direction reference
 * @param <tt>CATMathDirection2D& iDir</tt>
 * [in] Direction reference.
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Everything OK
 * <dt> <tt>E_FAIL</tt>			<dd> Otherwise
 * <dt> <tt>E_INVALIDARG</tt>	<dd> iDir norm is null
 * </dl>
 */
	virtual HRESULT SetDirectionReference(CATMathDirection2D& iDir)=0;
/**
 * Sets the direction reference
 * @param <tt>CATMathPoint2D& iDir</tt>
 * [in] Direction reference.
 * @return
 * A <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>           <dd> Everything OK
 * <dt> <tt>E_FAIL</tt>			<dd> Otherwise
 * </dl>
 */
	virtual HRESULT SetDirectionReference(CATMathPoint2D& iDir)=0;

};
#endif
